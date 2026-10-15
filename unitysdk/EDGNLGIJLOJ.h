#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }

#define EDGNLGIJLOJ_BGJELKENAGM_OFFSET UNITYSDK_OFFSET(0x133156A0)
#define EDGNLGIJLOJ_BIKKEFDJOEA_OFFSET UNITYSDK_OFFSET(0x13315340)
#define EDGNLGIJLOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x133157D0)
#define EDGNLGIJLOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13315780)
#define EDGNLGIJLOJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x13314BA0)
#define EDGNLGIJLOJ_FNEMCFLNINI_OFFSET UNITYSDK_OFFSET(0x133152E0)
#define EDGNLGIJLOJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x13314C60)
#define EDGNLGIJLOJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x13314AC0)

inline static constexpr unsigned int EDGNLGIJLOJ_TypeDefinitionIndex = 72324;

	class EDGNLGIJLOJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x60
		::UnityEngine::Animator* APPGGMLEPLN; // 0x68
		::System::Collections::Generic::HashSet_1<::System::UInt32>* MPBEGICPCAI; // 0x70
		::RPG::Client::LocalizedText* DLNBAPDCFLI; // 0x78
		::System::UInt32 IACHHFMCKMC; // 0x80
		::RPG::GameCore::RogueTitanType EOPLFIBLPHF; // 0x84
		::System::Boolean FMNEEONAMNO; // 0x88
		static ::System::Int32* StaticGet_HEFPDOBFKGF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EDGNLGIJLOJ")->GetStaticField(0x15C20);
		}

		static ::System::Int32* StaticGet_NLGNEJMAGIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EDGNLGIJLOJ")->GetStaticField(0x15C24);
		}

		static ::System::Int32* StaticGet_PAFPPCAMLDF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EDGNLGIJLOJ")->GetStaticField(0x15C28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::RogueTitanType a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTitanType, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_NKPPGDENJAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGJELKENAGM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_BGJELKENAGM_OFFSET))(this, a1);
		}

		::System::Void BIKKEFDJOEA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_BIKKEFDJOEA_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournTitanTypeRow* FNEMCFLNINI()
		{
			return ((::RPG::GameCore::RogueTournTitanTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGNLGIJLOJ_FNEMCFLNINI_OFFSET))(this);
		}

	};
