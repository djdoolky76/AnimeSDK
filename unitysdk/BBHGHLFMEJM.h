#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHGHLFMEJM;
class BOPKABDJJJH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define BBHGHLFMEJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBED670)
#define BBHGHLFMEJM_GBPLDEHGBNA_1_OFFSET UNITYSDK_OFFSET(0x1EBEE300)
#define BBHGHLFMEJM_GBPLDEHGBNA_OFFSET UNITYSDK_OFFSET(0x1EBEE040)
#define BBHGHLFMEJM_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1EBED580)
#define BBHGHLFMEJM_IIGOBJCNOAC_OFFSET UNITYSDK_OFFSET(0x1EBEE9F0)
#define BBHGHLFMEJM_IKHIBLGOKML_OFFSET UNITYSDK_OFFSET(0x1EBED700)
#define BBHGHLFMEJM_ILPJIHHNEAB_OFFSET UNITYSDK_OFFSET(0x1EBEE7E0)
#define BBHGHLFMEJM_ONGMPEGHBKP_OFFSET UNITYSDK_OFFSET(0x1EBEE490)

inline static constexpr unsigned int BBHGHLFMEJM_TypeDefinitionIndex = 35180;

	class BBHGHLFMEJM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BOPKABDJJJH*>* PJOGJOLKPLN; // 0x10
		::System::Int32 EFMGLPMDIIN; // 0x18
		static ::BBHGHLFMEJM** StaticGet_EMLNOINPICJ()
		{
			return (::BBHGHLFMEJM**)UnitySDK::FromName("", "BBHGHLFMEJM")->GetStaticField(0x47D80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_CTOR_OFFSET))(this);
		}

		static ::BBHGHLFMEJM* GGBLHEHJBDO()
		{
			return ((::BBHGHLFMEJM*(*)())((::PBYTE)hIl2Cpp + BBHGHLFMEJM_GGBLHEHJBDO_OFFSET))();
		}

		::BOPKABDJJJH* IKHIBLGOKML(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
		{
			return ((::BOPKABDJJJH*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_IKHIBLGOKML_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* GBPLDEHGBNA(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_GBPLDEHGBNA_OFFSET))(this, a1, a2);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* GBPLDEHGBNA_1(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_GBPLDEHGBNA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ONGMPEGHBKP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_ONGMPEGHBKP_OFFSET))(this, a1);
		}

		::System::Void ILPJIHHNEAB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_ILPJIHHNEAB_OFFSET))(this, a1);
		}

		::System::Void IIGOBJCNOAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHGHLFMEJM_IIGOBJCNOAC_OFFSET))(this);
		}

	};
