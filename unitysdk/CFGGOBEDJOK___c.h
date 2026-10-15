#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/System/Object.h"
class CFGGOBEDJOK;
namespace System { class Object; }

#define CFGGOBEDJOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0759B0)
#define CFGGOBEDJOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0759F0)
#define CFGGOBEDJOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E075A00)
#define CFGGOBEDJOK___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E075A50)
#define CFGGOBEDJOK___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1E075A60)

inline static constexpr unsigned int CFGGOBEDJOK___c_TypeDefinitionIndex = 26381;

	class CFGGOBEDJOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFGGOBEDJOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK___C_CTOR_OFFSET))(this);
		}

		::CFGGOBEDJOK* __cctor_b__28_0()
		{
			return ((::CFGGOBEDJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGGOBEDJOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__28_1(::CFMDKNCDDAL a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CFMDKNCDDAL))((::PBYTE)hIl2Cpp + CFGGOBEDJOK___C___CCTOR_B__28_1_OFFSET))(this, a1);
		}

		::CFMDKNCDDAL __cctor_b__28_2(::System::Int32 a1)
		{
			return ((::CFMDKNCDDAL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFGGOBEDJOK___C___CCTOR_B__28_2_OFFSET))(this, a1);
		}

	};
