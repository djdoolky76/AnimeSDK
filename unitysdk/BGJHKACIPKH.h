#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BGJHKACIPKH;
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define BGJHKACIPKH_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xB1888D0)
#define BGJHKACIPKH_AHAMHDGDMJA_OFFSET UNITYSDK_OFFSET(0xB188B60)
#define BGJHKACIPKH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB189260)
#define BGJHKACIPKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB188840)
#define BGJHKACIPKH_DMJBKKJCOLA_OFFSET UNITYSDK_OFFSET(0xB188850)
#define BGJHKACIPKH_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB1887D0)
#define BGJHKACIPKH_NMOOOJFHJAM_OFFSET UNITYSDK_OFFSET(0xB188FA0)

inline static constexpr unsigned int BGJHKACIPKH_TypeDefinitionIndex = 65282;

	class BGJHKACIPKH : public ::HEOLKMLMPML
	{
	public:
		::FMKEJLGKEMH* KBIPBKEGLCC; // 0x10
		::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* CCLGKDICBNH; // 0x18
		static ::BGJHKACIPKH** StaticGet_NBEFJBCDEOI()
		{
			return (::BGJHKACIPKH**)UnitySDK::FromName("", "BGJHKACIPKH")->GetStaticField(0x6A550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJHKACIPKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJHKACIPKH_CCTOR_OFFSET))();
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJHKACIPKH_NDMBDGKAJEK_OFFSET))(this);
		}

		static ::BGJHKACIPKH* DMJBKKJCOLA()
		{
			return ((::BGJHKACIPKH*(*)())((::PBYTE)hIl2Cpp + BGJHKACIPKH_DMJBKKJCOLA_OFFSET))();
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + BGJHKACIPKH_ACMPHJJOOHE_OFFSET))(this, a1, a2);
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
