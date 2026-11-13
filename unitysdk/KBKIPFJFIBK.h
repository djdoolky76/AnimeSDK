#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FloatCurve; }

#define KBKIPFJFIBK_AGNCOPGOBKK_OFFSET UNITYSDK_OFFSET(0x1A457620)
#define KBKIPFJFIBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A456510)
#define KBKIPFJFIBK_EDPILJCDCIF_OFFSET UNITYSDK_OFFSET(0x1A456AE0)
#define KBKIPFJFIBK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A4566E0)
#define KBKIPFJFIBK_JLJHMOPCMLM_OFFSET UNITYSDK_OFFSET(0x1A4574D0)
#define KBKIPFJFIBK_KKPBLAEIEEA_OFFSET UNITYSDK_OFFSET(0x1A457760)
#define KBKIPFJFIBK_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1A456690)

inline static constexpr unsigned int KBKIPFJFIBK_TypeDefinitionIndex = 80517;

	class KBKIPFJFIBK : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* MBBMBOMFIGF; // 0x10
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
