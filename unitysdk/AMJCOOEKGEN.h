#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FollowPointMapping; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMJCOOEKGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x155821F0)
#define AMJCOOEKGEN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15581F00)
#define AMJCOOEKGEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15581FF0)
#define AMJCOOEKGEN_HEAAJOAHBKA_OFFSET UNITYSDK_OFFSET(0x15582080)
#define AMJCOOEKGEN_JCJACDENGNE_OFFSET UNITYSDK_OFFSET(0x15581E70)
#define AMJCOOEKGEN_KNOOJINCNKP_OFFSET UNITYSDK_OFFSET(0x15582090)
#define AMJCOOEKGEN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15581D20)
#define AMJCOOEKGEN_PEMJOLDHFCH_OFFSET UNITYSDK_OFFSET(0x155820A0)
#define AMJCOOEKGEN_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0x15581D90)

inline static constexpr unsigned int AMJCOOEKGEN_TypeDefinitionIndex = 68426;

	class AMJCOOEKGEN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FollowPointMapping*>* PAPHLNLDKJL; // 0x10
		static ::System::Boolean* StaticGet_NFIALAAHDLM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMJCOOEKGEN")->GetStaticField(0x14260);
		}

		static ::System::Single* StaticGet_GLEBFHNHOLN()
		{
			return (::System::Single*)UnitySDK::FromName("", "AMJCOOEKGEN")->GetStaticField(0x14264);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PJPNKHDIPNG(::RPG::Client::FollowPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_PJPNKHDIPNG_OFFSET))(this, a1);
		}

		::System::Void JCJACDENGNE(::RPG::Client::FollowPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_JCJACDENGNE_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean HEAAJOAHBKA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMJCOOEKGEN_HEAAJOAHBKA_OFFSET))();
		}

		static ::System::Single KNOOJINCNKP()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + AMJCOOEKGEN_KNOOJINCNKP_OFFSET))();
		}

		static ::System::Void PEMJOLDHFCH(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AMJCOOEKGEN_PEMJOLDHFCH_OFFSET))(a1, a2);
		}

	};
