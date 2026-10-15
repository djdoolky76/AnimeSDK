#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGPKJCKKCBI;
namespace System { class Object; }

#define MGPKJCKKCBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FE850)
#define MGPKJCKKCBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FE890)
#define MGPKJCKKCBI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9FE8A0)

inline static constexpr unsigned int MGPKJCKKCBI___c_TypeDefinitionIndex = 31389;

	class MGPKJCKKCBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPKJCKKCBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI___C_CTOR_OFFSET))(this);
		}

		::MGPKJCKKCBI* __cctor_b__33_0()
		{
			return ((::MGPKJCKKCBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
