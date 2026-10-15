#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class TeamData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJLBLAEMGOA_CAEJIAPOMOJ_OFFSET UNITYSDK_OFFSET(0xB71E0F0)
#define LJLBLAEMGOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB71CED0)
#define LJLBLAEMGOA_DOGANGPONFN_OFFSET UNITYSDK_OFFSET(0xB71DCC0)
#define LJLBLAEMGOA_FOGJHFEIGOL_OFFSET UNITYSDK_OFFSET(0xB71DFD0)
#define LJLBLAEMGOA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB71CFE0)
#define LJLBLAEMGOA_JDHNHGCPJOC_OFFSET UNITYSDK_OFFSET(0xB71D0A0)
#define LJLBLAEMGOA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB71CF20)
#define LJLBLAEMGOA_LFCBALLDJBG_OFFSET UNITYSDK_OFFSET(0xB71E420)
#define LJLBLAEMGOA_OBCCKHNDFLN_OFFSET UNITYSDK_OFFSET(0xB71E490)
#define LJLBLAEMGOA_OELFPDGFFAM_OFFSET UNITYSDK_OFFSET(0xB71DF20)

inline static constexpr unsigned int LJLBLAEMGOA_TypeDefinitionIndex = 68112;

	class LJLBLAEMGOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NNLADECPCEB; // 0x10
		::System::UInt32 KKBPMCFACNO; // 0x18
		::System::Boolean OHLPOMNGEPP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JDHNHGCPJOC(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_JDHNHGCPJOC_OFFSET))(this, a1, a2);
		}

		::System::Void FOGJHFEIGOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_FOGJHFEIGOL_OFFSET))(this);
		}

		::System::Void CAEJIAPOMOJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_CAEJIAPOMOJ_OFFSET))(this, a1);
		}

		::System::Void LFCBALLDJBG(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_LFCBALLDJBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OELFPDGFFAM(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::VoiceType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::VoiceType))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_OELFPDGFFAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOGANGPONFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_DOGANGPONFN_OFFSET))(this, a1);
		}

		::System::Void OBCCKHNDFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_OBCCKHNDFLN_OFFSET))(this);
		}

	};
