#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAFNNCHIALG;
namespace System { class Object; }

#define BAFNNCHIALG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20574080)
#define BAFNNCHIALG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205740C0)
#define BAFNNCHIALG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x205740D0)

inline static constexpr unsigned int BAFNNCHIALG___c_TypeDefinitionIndex = 34068;

	class BAFNNCHIALG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAFNNCHIALG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG___C_CTOR_OFFSET))(this);
		}

		::BAFNNCHIALG* __cctor_b__18_0()
		{
			return ((::BAFNNCHIALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
