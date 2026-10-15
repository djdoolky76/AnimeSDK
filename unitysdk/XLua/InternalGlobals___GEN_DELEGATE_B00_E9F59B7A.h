#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/MulticastDelegate.h"
class AGCPAMNLCGN;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB52F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_CTOR_OFFSET UNITYSDK_OFFSET(0x14DB5250)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB5390)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB52D0)

namespace XLua
{
	class InternalGlobals___GEN_DELEGATE_B00_E9F59B7A : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceProperty a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceProperty a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E9F59B7A_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
