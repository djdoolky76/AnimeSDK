#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CACBGEPOFHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1BC510)
#define CACBGEPOFHJ_DAGNMHGKNIJ_OFFSET UNITYSDK_OFFSET(0xC1BC0F0)
#define CACBGEPOFHJ_HEOLNDKJGEH_OFFSET UNITYSDK_OFFSET(0xC1BC2F0)
#define CACBGEPOFHJ_KDEFJFLPODP_OFFSET UNITYSDK_OFFSET(0xC1BC490)

inline static constexpr unsigned int CACBGEPOFHJ_TypeDefinitionIndex = 61356;

	class CACBGEPOFHJ : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ACLDOADLKGE()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xDD40);
		}

		static ::System::String** StaticGet_HKODCLIDLAI()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xDD48);
		}

		static ::System::String** StaticGet_NJBINOCOCED()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xDD50);
		}

		static ::System::String** StaticGet_EDMGDJLAOLP()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xDD58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CACBGEPOFHJ_CCTOR_OFFSET))();
		}

		static ::System::String* DAGNMHGKNIJ()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CACBGEPOFHJ_DAGNMHGKNIJ_OFFSET))();
		}

		static ::System::String* KDEFJFLPODP()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CACBGEPOFHJ_KDEFJFLPODP_OFFSET))();
		}

		static ::System::String* HEOLNDKJGEH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CACBGEPOFHJ_HEOLNDKJGEH_OFFSET))(a1);
		}

	};
