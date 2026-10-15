#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPBOLPFKPOA;
class PDOFJAJHMNE;
namespace System { class String; }

#define GPBOLPFKPOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD33C70)
#define GPBOLPFKPOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD33C60)
#define GPBOLPFKPOA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1DD336F0)
#define GPBOLPFKPOA_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1DD33660)
#define GPBOLPFKPOA_IEFDLJPDCPK_OFFSET UNITYSDK_OFFSET(0x1DD33690)
#define GPBOLPFKPOA_NJDPOHCOEFF_OFFSET UNITYSDK_OFFSET(0x1DD339A0)
#define GPBOLPFKPOA_OECIHKHGCFD_OFFSET UNITYSDK_OFFSET(0x1DD33B00)
#define GPBOLPFKPOA_OFABCMGONMG_OFFSET UNITYSDK_OFFSET(0x1DD33840)

inline static constexpr unsigned int GPBOLPFKPOA_TypeDefinitionIndex = 6450;

	class GPBOLPFKPOA : public ::System::Object
	{
	public:
		::PDOFJAJHMNE* NJNICNCJGCL; // 0x10
		static ::GPBOLPFKPOA** StaticGet__Default_k__BackingField()
		{
			return (::GPBOLPFKPOA**)UnitySDK::FromName("", "GPBOLPFKPOA")->GetStaticField(0x339D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBOLPFKPOA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPBOLPFKPOA_CCTOR_OFFSET))();
		}

		static ::GPBOLPFKPOA* get_Default()
		{
			return ((::GPBOLPFKPOA*(*)())((::PBYTE)hIl2Cpp + GPBOLPFKPOA_GET_DEFAULT_OFFSET))();
		}

		static ::System::Void IEFDLJPDCPK(::PDOFJAJHMNE* a1)
		{
			return ((::System::Void(*)(::PDOFJAJHMNE*))((::PBYTE)hIl2Cpp + GPBOLPFKPOA_IEFDLJPDCPK_OFFSET))(a1);
		}

		static ::System::Void ELEPDOMDAGA(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPBOLPFKPOA_ELEPDOMDAGA_OFFSET))(a1);
		}

		static ::System::Void OFABCMGONMG(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPBOLPFKPOA_OFABCMGONMG_OFFSET))(a1);
		}

		static ::System::Void NJDPOHCOEFF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPBOLPFKPOA_NJDPOHCOEFF_OFFSET))(a1);
		}

		static ::System::Void OECIHKHGCFD(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + GPBOLPFKPOA_OECIHKHGCFD_OFFSET))(a1, a2);
		}

	};
