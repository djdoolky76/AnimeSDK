#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class FloatCurve; }

#define KBKIPFJFIBK_AGNCOPGOBKK_OFFSET UNITYSDK_OFFSET(0xB30B760)
#define KBKIPFJFIBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB30A650)
#define KBKIPFJFIBK_EDPILJCDCIF_OFFSET UNITYSDK_OFFSET(0xB30AC20)
#define KBKIPFJFIBK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB30A820)
#define KBKIPFJFIBK_JLJHMOPCMLM_OFFSET UNITYSDK_OFFSET(0xB30B610)
#define KBKIPFJFIBK_KKPBLAEIEEA_OFFSET UNITYSDK_OFFSET(0xB30B8A0)
#define KBKIPFJFIBK_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0xB30A7D0)

inline static constexpr unsigned int KBKIPFJFIBK_TypeDefinitionIndex = 77783;

	class KBKIPFJFIBK : public ::System::Object
	{
	public:
		::Entitas::IGroup* MBBMBOMFIGF; // 0x10
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::FloatCurve* PNIAOBBEAKG; // 0x20
		::OAIPJANPCEK* PDENFEFCAGN; // 0x28
		::System::Single IPMFPANJNOO; // 0x30
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_KMANBNKPLJJ_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_EXECUTE_OFFSET))(this);
		}

		::System::Void EDPILJCDCIF(::NGFHCJIAOLH* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Single))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_EDPILJCDCIF_OFFSET))(this, a1, a2);
		}

		::System::Void AGNCOPGOBKK(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_AGNCOPGOBKK_OFFSET))(this, a1, a2);
		}

		::System::Void KKPBLAEIEEA(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_KKPBLAEIEEA_OFFSET))(this, a1, a2);
		}

		::System::Void JLJHMOPCMLM(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KBKIPFJFIBK_JLJHMOPCMLM_OFFSET))(this, a1, a2);
		}

	};
