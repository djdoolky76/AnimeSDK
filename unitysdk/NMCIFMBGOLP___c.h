#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMCIFMBGOLP;
namespace System { class Object; }

#define NMCIFMBGOLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB417C0)
#define NMCIFMBGOLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB41800)
#define NMCIFMBGOLP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB41810)

inline static constexpr unsigned int NMCIFMBGOLP___c_TypeDefinitionIndex = 33839;

	class NMCIFMBGOLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMCIFMBGOLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP___C_CTOR_OFFSET))(this);
		}

		::NMCIFMBGOLP* __cctor_b__23_0()
		{
			return ((::NMCIFMBGOLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
