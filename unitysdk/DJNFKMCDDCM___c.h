#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNFKMCDDCM;
namespace System { class Object; }

#define DJNFKMCDDCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D18C0)
#define DJNFKMCDDCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1900)
#define DJNFKMCDDCM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1D1910)

inline static constexpr unsigned int DJNFKMCDDCM___c_TypeDefinitionIndex = 34892;

	class DJNFKMCDDCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJNFKMCDDCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM___C_CTOR_OFFSET))(this);
		}

		::DJNFKMCDDCM* __cctor_b__28_0()
		{
			return ((::DJNFKMCDDCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
