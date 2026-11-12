#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BGJHKACIPKH;
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define BGJHKACIPKH_AHAMHDGDMJA_OFFSET UNITYSDK_OFFSET(0xBB13CE0)
#define BGJHKACIPKH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB143E0)
#define BGJHKACIPKH_COMPILE_OFFSET UNITYSDK_OFFSET(0xBB13A50)
#define BGJHKACIPKH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB139C0)
#define BGJHKACIPKH_DMJBKKJCOLA_OFFSET UNITYSDK_OFFSET(0xBB139D0)
#define BGJHKACIPKH_GET_TAG_OFFSET UNITYSDK_OFFSET(0xBB13950)
#define BGJHKACIPKH_NMOOOJFHJAM_OFFSET UNITYSDK_OFFSET(0xBB14120)

inline static constexpr unsigned int BGJHKACIPKH_TypeDefinitionIndex = 67037;

	class BGJHKACIPKH : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* CCLGKDICBNH; // 0x10
		::FMKEJLGKEMH* KBIPBKEGLCC; // 0x18
		static ::BGJHKACIPKH** StaticGet_NBEFJBCDEOI()
		{
			return (::BGJHKACIPKH**)UnitySDK::FromName("", "BGJHKACIPKH")->GetStaticField(0x6AA70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJHKACIPKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJHKACIPKH_CCTOR_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJHKACIPKH_GET_TAG_OFFSET))(this);
		}

		static ::BGJHKACIPKH* DMJBKKJCOLA()
		{
			return ((::BGJHKACIPKH*(*)())((::PBYTE)hIl2Cpp + BGJHKACIPKH_DMJBKKJCOLA_OFFSET))();
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + BGJHKACIPKH_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* AHAMHDGDMJA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BGJHKACIPKH_AHAMHDGDMJA_OFFSET))(this, a1);
		}

		::System::UInt32 NMOOOJFHJAM(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + BGJHKACIPKH_NMOOOJFHJAM_OFFSET))(this, a1, a2);
		}

	};
