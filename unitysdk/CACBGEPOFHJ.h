#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CACBGEPOFHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1BDAE0)
#define CACBGEPOFHJ_DAGNMHGKNIJ_OFFSET UNITYSDK_OFFSET(0xC1BD6C0)
#define CACBGEPOFHJ_HEOLNDKJGEH_OFFSET UNITYSDK_OFFSET(0xC1BD8C0)
#define CACBGEPOFHJ_KDEFJFLPODP_OFFSET UNITYSDK_OFFSET(0xC1BDA60)

inline static constexpr unsigned int CACBGEPOFHJ_TypeDefinitionIndex = 61356;

	class CACBGEPOFHJ : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EDMGDJLAOLP()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xD4D0);
		}

		static ::System::String** StaticGet_HKODCLIDLAI()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xD4D8);
		}

		static ::System::String** StaticGet_NJBINOCOCED()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xD4E0);
		}

		static ::System::String** StaticGet_ACLDOADLKGE()
		{
			return (::System::String**)UnitySDK::FromName("", "CACBGEPOFHJ")->GetStaticField(0xD4E8);
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
