#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class SceneTV; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MODFAMJCMAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA26DC0)
#define MODFAMJCMAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA270A0)
#define MODFAMJCMAH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA26E40)
#define MODFAMJCMAH_PDOKCIFFKIC_OFFSET UNITYSDK_OFFSET(0xBA27230)

inline static constexpr unsigned int MODFAMJCMAH_TypeDefinitionIndex = 57361;

	class MODFAMJCMAH : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SceneTV*>* KOHPIBKEHBL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODFAMJCMAH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODFAMJCMAH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODFAMJCMAH_DISPOSE_OFFSET))(this);
		}

		::System::Void PDOKCIFFKIC(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MODFAMJCMAH_PDOKCIFFKIC_OFFSET))(this, a1, a2);
		}

	};
