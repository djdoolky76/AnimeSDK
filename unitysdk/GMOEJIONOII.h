#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMOEJIONOII;
class LELCKJPOPAO;
namespace System { class Object; }

#define GMOEJIONOII_AOFPPFNHFLK_OFFSET UNITYSDK_OFFSET(0x1CE3DC40)
#define GMOEJIONOII_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE3DAC0)
#define GMOEJIONOII_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3E180)
#define GMOEJIONOII_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1CE3D8D0)
#define GMOEJIONOII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE3D700)
#define GMOEJIONOII_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE3D8C0)
#define GMOEJIONOII_DNEKNLFCJCN_OFFSET UNITYSDK_OFFSET(0x1CE3DDB0)
#define GMOEJIONOII_EFJCHCBMOKD_OFFSET UNITYSDK_OFFSET(0x1CE3DE00)
#define GMOEJIONOII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE3D990)
#define GMOEJIONOII_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE3D710)
#define GMOEJIONOII_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x1CE3E130)
#define GMOEJIONOII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE3DAA0)
#define GMOEJIONOII_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CE3D630)
#define GMOEJIONOII_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1CE3D6E0)
#define GMOEJIONOII_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1CE3D6F0)
#define GMOEJIONOII_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1CE3DFC0)
#define GMOEJIONOII_INIT_OFFSET UNITYSDK_OFFSET(0x1CE3D620)
#define GMOEJIONOII_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE3DB80)
#define GMOEJIONOII_OOGKECBIKHC_OFFSET UNITYSDK_OFFSET(0x1CE3DF70)

inline static constexpr unsigned int GMOEJIONOII_TypeDefinitionIndex = 10697;

	class GMOEJIONOII : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GMOEJIONOII_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::GMOEJIONOII* a1, ::GMOEJIONOII* a2)
		{
			return ((::System::Boolean(*)(::GMOEJIONOII*, ::GMOEJIONOII*))((::PBYTE)hIl2Cpp + GMOEJIONOII_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::GMOEJIONOII* a1, ::GMOEJIONOII* a2)
		{
			return ((::System::Boolean(*)(::GMOEJIONOII*, ::GMOEJIONOII*))((::PBYTE)hIl2Cpp + GMOEJIONOII_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::GMOEJIONOII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMOEJIONOII*))((::PBYTE)hIl2Cpp + GMOEJIONOII_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMOEJIONOII_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::GMOEJIONOII* a1)
		{
			return ((::System::Boolean(*)(::GMOEJIONOII*))((::PBYTE)hIl2Cpp + GMOEJIONOII_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::GMOEJIONOII* a1)
		{
			return ((::System::Boolean(*)(::GMOEJIONOII*))((::PBYTE)hIl2Cpp + GMOEJIONOII_NHCFLDCDLCP_OFFSET))(a1);
		}

		::System::UInt64 AOFPPFNHFLK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_AOFPPFNHFLK_OFFSET))(this);
		}

		::System::Void DNEKNLFCJCN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GMOEJIONOII_DNEKNLFCJCN_OFFSET))(this, a1);
		}

		::System::UInt32 EFJCHCBMOKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_EFJCHCBMOKD_OFFSET))(this);
		}

		::System::Void OOGKECBIKHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMOEJIONOII_OOGKECBIKHC_OFFSET))(this, a1);
		}

		::System::UInt32 IKOCHGBIGPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOEJIONOII_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMOEJIONOII_FKHABBFPGFA_OFFSET))(this, a1);
		}

	};
