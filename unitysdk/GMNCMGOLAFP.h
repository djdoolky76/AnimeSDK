#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GMNCMGOLAFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1FBB0)
#define GMNCMGOLAFP_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x1FF1F7E0)
#define GMNCMGOLAFP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1FF1F740)
#define GMNCMGOLAFP_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0x1FF1F790)
#define GMNCMGOLAFP_OECIHKHGCFD_1_OFFSET UNITYSDK_OFFSET(0x1FF1F9E0)
#define GMNCMGOLAFP_OECIHKHGCFD_OFFSET UNITYSDK_OFFSET(0x1FF1F830)

inline static constexpr unsigned int GMNCMGOLAFP_TypeDefinitionIndex = 45164;

	class GMNCMGOLAFP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMNCMGOLAFP_CTOR_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMNCMGOLAFP_ELEPDOMDAGA_OFFSET))(this, a1);
		}

		::System::Void LFKJJELMNPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMNCMGOLAFP_LFKJJELMNPK_OFFSET))(this, a1);
		}

		::System::Void DCADIANHPFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMNCMGOLAFP_DCADIANHPFD_OFFSET))(this, a1);
		}

		::System::Void OECIHKHGCFD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMNCMGOLAFP_OECIHKHGCFD_OFFSET))(this, a1);
		}

		::System::Void OECIHKHGCFD_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + GMNCMGOLAFP_OECIHKHGCFD_1_OFFSET))(this, a1, a2);
		}

	};
