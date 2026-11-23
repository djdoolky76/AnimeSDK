#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define TMPRO_TMP_INPUTFIELD_AFDC641F682D3170_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define TMPRO_TMP_INPUTFIELD_AFDC641F682D3170__CTOR_OFFSET UNITYSDK_OFFSET(0x4051D40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_AFDC641F682D3170_TypeDefinitionIndex = 18169;

	class TMP_InputField_AFDC641F682D3170 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_AFDC641F682D3170__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Char Invoke(::System::String* E97E8D008427A296, ::System::Int32 F3296C8FBA5D1636, ::System::Char A72FE7647458C1E4)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_AFDC641F682D3170_INVOKE_OFFSET))(this, E97E8D008427A296, F3296C8FBA5D1636, A72FE7647458C1E4);
		}
	};
}
