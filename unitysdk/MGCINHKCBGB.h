#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System { class Object; }

#define MGCINHKCBGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB916570)
#define MGCINHKCBGB_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xB916810)
#define MGCINHKCBGB_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB916580)

inline static constexpr unsigned int MGCINHKCBGB_TypeDefinitionIndex = 64155;

	class MGCINHKCBGB : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* HBOHHPACHJA; // 0x10
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + MGCINHKCBGB_CTOR_OFFSET))(this, a1);
		}

		::System::Object* KFGJEKJHIMB()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCINHKCBGB_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + MGCINHKCBGB_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
