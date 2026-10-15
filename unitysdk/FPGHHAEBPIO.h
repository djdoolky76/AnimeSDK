#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"
class BGNDPIPJFCI;
class DIFMKJMFKOK;
class KLEFGGIHGMI;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define FPGHHAEBPIO_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0x15919060)
#define FPGHHAEBPIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x159192B0)
#define FPGHHAEBPIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15918480)
#define FPGHHAEBPIO_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x15918A00)
#define FPGHHAEBPIO_EMNJPFLFCEH_OFFSET UNITYSDK_OFFSET(0x159185C0)
#define FPGHHAEBPIO_ENNAMLJFOLO_OFFSET UNITYSDK_OFFSET(0x15919110)
#define FPGHHAEBPIO_HOJKDDMIMOK_OFFSET UNITYSDK_OFFSET(0x159191A0)
#define FPGHHAEBPIO_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0x15918960)
#define FPGHHAEBPIO_IOJDCKFILDB_OFFSET UNITYSDK_OFFSET(0x15918CC0)
#define FPGHHAEBPIO_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x15918E40)
#define FPGHHAEBPIO_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x15918910)
#define FPGHHAEBPIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15918490)
#define FPGHHAEBPIO_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0x15918BB0)
#define FPGHHAEBPIO_PNGKPEOKOKM_OFFSET UNITYSDK_OFFSET(0x15918B30)

inline static constexpr unsigned int FPGHHAEBPIO_TypeDefinitionIndex = 73785;

	class FPGHHAEBPIO : public ::HPKACEPPPCA
	{
	public:
		::DIFMKJMFKOK* IHGJDKBPBHC; // 0x80
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x88
		::UnityEngine::Coroutine* JGGEBBFNILI; // 0x90
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x98
		::System::Int32 HKOPHLPDGBA; // 0xA0
		static ::RPG::Client::RPGProfilerMarker** StaticGet_JHLONDOPLHJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CC70);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CC78);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LDPIEDCFCDN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CC80);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JNMHLKMAJEO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CC88);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NPMIAKEAPPP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CC90);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NOONLPEIKBC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CC98);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_AHADPHDLBJK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CCA0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_IEOLEAGHOHE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CCA8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FGIMIFBCICH()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FPGHHAEBPIO")->GetStaticField(0x5CCB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPGHHAEBPIO_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::KLEFGGIHGMI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EMNJPFLFCEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_EMNJPFLFCEH_OFFSET))(this, a1);
		}

		::System::Void IGDIEBODAAH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_IGDIEBODAAH_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void OGDLIONGCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_OGDLIONGCMP_OFFSET))(this);
		}

		::System::Void IOJDCKFILDB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_IOJDCKFILDB_OFFSET))(this, a1);
		}

		::System::Void KGJAMKFPOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::Boolean BFJJOJKKLGG(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_BFJJOJKKLGG_OFFSET))(this, a1);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::Void ENNAMLJFOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_ENNAMLJFOLO_OFFSET))(this);
		}

		::System::Void HOJKDDMIMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_HOJKDDMIMOK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PNGKPEOKOKM()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHHAEBPIO_PNGKPEOKOKM_OFFSET))(this);
		}

	};
