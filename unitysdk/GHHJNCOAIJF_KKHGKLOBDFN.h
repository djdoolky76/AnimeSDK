#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF_JOCPKGCLFDN;
class GHHJNCOAIJF_KKHGKLOBDFN;

#define GHHJNCOAIJF_KKHGKLOBDFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A15A50)
#define GHHJNCOAIJF_KKHGKLOBDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A15A40)
#define GHHJNCOAIJF_KKHGKLOBDFN_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x15A14770)

inline static constexpr unsigned int GHHJNCOAIJF_KKHGKLOBDFN_TypeDefinitionIndex = 69351;

	class GHHJNCOAIJF_KKHGKLOBDFN : public ::System::Object
	{
	public:
		::GHHJNCOAIJF_JOCPKGCLFDN* IPHGFAPNOOO; // 0x10
		::System::Boolean NDMNPNAOCIO; // 0x18
		static ::GHHJNCOAIJF_KKHGKLOBDFN** StaticGet_HGLIFJGHADE()
		{
			return (::GHHJNCOAIJF_KKHGKLOBDFN**)UnitySDK::FromName("", "KKHGKLOBDFN")->GetStaticField(0x63E80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_KKHGKLOBDFN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHJNCOAIJF_KKHGKLOBDFN_CCTOR_OFFSET))();
		}

		::GHHJNCOAIJF_KKHGKLOBDFN* NBHCPBBGAKA()
		{
			return ((::GHHJNCOAIJF_KKHGKLOBDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_KKHGKLOBDFN_NBHCPBBGAKA_OFFSET))(this);
		}

	};
