#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGAFIPIKPLJ;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCFLDDIEHJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AD5E0)
#define HCFLDDIEHJE_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x1B7AD420)
#define HCFLDDIEHJE_HKCFMHKLNBA_OFFSET UNITYSDK_OFFSET(0x1B7AD0B0)
#define HCFLDDIEHJE_ILFFPODAGKP_OFFSET UNITYSDK_OFFSET(0x1B7ACFA0)
#define HCFLDDIEHJE_KANJEGLHOBN_OFFSET UNITYSDK_OFFSET(0x1B7AD380)
#define HCFLDDIEHJE_KDJOCCNMOIH_OFFSET UNITYSDK_OFFSET(0x1B7AD2A0)
#define HCFLDDIEHJE_PILBHDLILBC_OFFSET UNITYSDK_OFFSET(0x1B7AD1E0)

inline static constexpr unsigned int HCFLDDIEHJE_TypeDefinitionIndex = 62427;

	class HCFLDDIEHJE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HGAFIPIKPLJ*>* LGANLLPIFHH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_CTOR_OFFSET))(this);
		}

		::System::Void ILFFPODAGKP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_ILFFPODAGKP_OFFSET))(this, a1);
		}

		::System::Void HKCFMHKLNBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_HKCFMHKLNBA_OFFSET))(this, a1);
		}

		::System::Void PILBHDLILBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_PILBHDLILBC_OFFSET))(this, a1);
		}

		::System::Boolean KDJOCCNMOIH(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_KDJOCCNMOIH_OFFSET))(this, a1);
		}

		::System::Void KANJEGLHOBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_KANJEGLHOBN_OFFSET))(this);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLDDIEHJE_FMPAOKGPMNG_OFFSET))(this);
		}

	};
