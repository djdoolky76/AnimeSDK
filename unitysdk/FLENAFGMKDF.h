#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCCCCPPIJDB.h"
class ENAJMANKMBM;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FLENAFGMKDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC090F0)
#define FLENAFGMKDF_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1EC093E0)
#define FLENAFGMKDF_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EC09280)
#define FLENAFGMKDF_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1EC09530)
#define FLENAFGMKDF_LFOLLFPFJHF_OFFSET UNITYSDK_OFFSET(0x1EC09540)
#define FLENAFGMKDF_LOAD_OFFSET UNITYSDK_OFFSET(0x1EC09120)

inline static constexpr unsigned int FLENAFGMKDF_TypeDefinitionIndex = 35314;

	class FLENAFGMKDF : public ::BCCCCPPIJDB
	{
	public:
		::System::String* CMDHEFBNLGP; // 0x10
		static ::ENAJMANKMBM** StaticGet_CKILLMGJJPD()
		{
			return (::ENAJMANKMBM**)UnitySDK::FromName("", "FLENAFGMKDF")->GetStaticField(0x49D00);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLENAFGMKDF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + FLENAFGMKDF_LOAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + FLENAFGMKDF_FLUSH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLENAFGMKDF_DELETEKEY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPartialSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLENAFGMKDF_GET_ISPARTIALSAVE_OFFSET))(this);
		}

		static ::System::Void LFOLLFPFJHF(::ENAJMANKMBM* a1)
		{
			return ((::System::Void(*)(::ENAJMANKMBM*))((::PBYTE)hIl2Cpp + FLENAFGMKDF_LFOLLFPFJHF_OFFSET))(a1);
		}

	};
