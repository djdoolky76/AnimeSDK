#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FloatCurve; }

#define KBKIPFJFIBK_AGNCOPGOBKK_OFFSET UNITYSDK_OFFSET(0xBB95870)
#define KBKIPFJFIBK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB94760)
#define KBKIPFJFIBK_EDPILJCDCIF_OFFSET UNITYSDK_OFFSET(0xBB94D30)
#define KBKIPFJFIBK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBB94930)
#define KBKIPFJFIBK_JLJHMOPCMLM_OFFSET UNITYSDK_OFFSET(0xBB95720)
#define KBKIPFJFIBK_KKPBLAEIEEA_OFFSET UNITYSDK_OFFSET(0xBB959B0)
#define KBKIPFJFIBK_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0xBB948E0)

inline static constexpr unsigned int KBKIPFJFIBK_TypeDefinitionIndex = 80518;

	class KBKIPFJFIBK : public ::System::Object
	{
	public:
		::OAIPJANPCEK* PDENFEFCAGN; // 0x10
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x18
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* MBBMBOMFIGF; // 0x20
		::RPG::GameCore::FloatCurve* PNIAOBBEAKG; // 0x28
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
