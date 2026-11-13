#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FollowPointMapping; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMJCOOEKGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x197DCA10)
#define AMJCOOEKGEN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x197DC720)
#define AMJCOOEKGEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197DC810)
#define AMJCOOEKGEN_HEAAJOAHBKA_OFFSET UNITYSDK_OFFSET(0x197DC8A0)
#define AMJCOOEKGEN_JCJACDENGNE_OFFSET UNITYSDK_OFFSET(0x197DC690)
#define AMJCOOEKGEN_KNOOJINCNKP_OFFSET UNITYSDK_OFFSET(0x197DC8B0)
#define AMJCOOEKGEN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x197DC540)
#define AMJCOOEKGEN_PEMJOLDHFCH_OFFSET UNITYSDK_OFFSET(0x197DC8C0)
#define AMJCOOEKGEN_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0x197DC5B0)

inline static constexpr unsigned int AMJCOOEKGEN_TypeDefinitionIndex = 70373;

	class AMJCOOEKGEN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FollowPointMapping*>* PAPHLNLDKJL; // 0x10
		static ::System::Boolean* StaticGet_NFIALAAHDLM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMJCOOEKGEN")->GetStaticField(0x122B0);
		}

		static ::System::Single* StaticGet_GLEBFHNHOLN()
		{
			return (::System::Single*)UnitySDK::FromName("", "AMJCOOEKGEN")->GetStaticField(0x122B4);
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
