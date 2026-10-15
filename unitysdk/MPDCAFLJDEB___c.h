#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDCAFLJDEB;
namespace System { class Object; }

#define MPDCAFLJDEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB4F80)
#define MPDCAFLJDEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB4FB0)
#define MPDCAFLJDEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAB4FC0)

inline static constexpr unsigned int MPDCAFLJDEB___c_TypeDefinitionIndex = 34631;

	class MPDCAFLJDEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDCAFLJDEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB___C_CTOR_OFFSET))(this);
		}

		::MPDCAFLJDEB* __cctor_b__23_0()
		{
			return ((::MPDCAFLJDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
