#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System { class Object; }

#define LGHPLDNMIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2F320)
#define LGHPLDNMIFH_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xBF2F880)
#define LGHPLDNMIFH_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBF2F330)

inline static constexpr unsigned int LGHPLDNMIFH_TypeDefinitionIndex = 65598;

	class LGHPLDNMIFH : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* NILKGICLHGA; // 0x10
		::MCDOIAPPMBF* HOFOBIDIBEI; // 0x18
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + LGHPLDNMIFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* KFGJEKJHIMB()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPLDNMIFH_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + LGHPLDNMIFH_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
