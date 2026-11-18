#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define FFPIFPJLDGB_AOHNLILBOCN_OFFSET UNITYSDK_OFFSET(0x10F66AC0)
#define FFPIFPJLDGB_CJAIGCKFDBI_OFFSET UNITYSDK_OFFSET(0x10F66FD0)
#define FFPIFPJLDGB_FMFHEFEIIGE_OFFSET UNITYSDK_OFFSET(0x10F66EE0)
#define FFPIFPJLDGB_GAGLJBGGLBA_OFFSET UNITYSDK_OFFSET(0x10F667E0)
#define FFPIFPJLDGB_IEKFFMAHOJB_OFFSET UNITYSDK_OFFSET(0x10F66BB0)
#define FFPIFPJLDGB_PMCDFLPFAGL_OFFSET UNITYSDK_OFFSET(0x10F66DE0)
#define FFPIFPJLDGB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F667D0)

inline static constexpr unsigned int FFPIFPJLDGB_TypeDefinitionIndex = 40153;

class FFPIFPJLDGB : public ::System::Object
{
public:
	// static const ::System::Int32 KKPPHIBFOCK = 0x2DC6C2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIFPJLDGB__CTOR_OFFSET))(this);
	}

	static ::System::Int64 GAGLJBGGLBA()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + FFPIFPJLDGB_GAGLJBGGLBA_OFFSET))();
	}

	static ::System::Boolean IEKFFMAHOJB(::System::Int64& EGLOHGPMIOD)
	{
		return ((::System::Boolean(*)(::System::Int64&))((::PBYTE)hIl2Cpp + FFPIFPJLDGB_IEKFFMAHOJB_OFFSET))(EGLOHGPMIOD);
	}

	static ::CJIEIHEDMME* AOHNLILBOCN()
	{
		return ((::CJIEIHEDMME*(*)())((::PBYTE)hIl2Cpp + FFPIFPJLDGB_AOHNLILBOCN_OFFSET))();
	}

	static ::System::Boolean PMCDFLPFAGL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFPIFPJLDGB_PMCDFLPFAGL_OFFSET))();
	}

	static ::System::Int32 FMFHEFEIIGE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FFPIFPJLDGB_FMFHEFEIIGE_OFFSET))();
	}

	static ::System::Boolean CJAIGCKFDBI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFPIFPJLDGB_CJAIGCKFDBI_OFFSET))();
	}
};
