#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OJFJNOLABHO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOJLPBEILMB_EGAFNANHILD_OFFSET UNITYSDK_OFFSET(0x17131EB0)
#define EOJLPBEILMB_EMDMOBGMBBD_OFFSET UNITYSDK_OFFSET(0x171319D0)
#define EOJLPBEILMB_MKPALFDBFLO_OFFSET UNITYSDK_OFFSET(0x17131D70)
#define EOJLPBEILMB__CTOR_OFFSET UNITYSDK_OFFSET(0x171319C0)

inline static constexpr unsigned int EOJLPBEILMB_TypeDefinitionIndex = 89735;

class EOJLPBEILMB : public ::System::Object
{
public:
	::System::Int32 PNFOMNELGLP; // 0x10
	::System::Boolean IJLNFHHJOPH; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJLPBEILMB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OJFJNOLABHO*>* EMDMOBGMBBD()
	{
		return ((::System::Collections::Generic::List_1<::OJFJNOLABHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJLPBEILMB_EMDMOBGMBBD_OFFSET))(this);
	}

	::System::Int32 MKPALFDBFLO(::OJFJNOLABHO* GMDMAPKCDBM, ::OJFJNOLABHO* JPBNKOJDKJO)
	{
		return ((::System::Int32(*)(::PVOID, ::OJFJNOLABHO*, ::OJFJNOLABHO*))((::PBYTE)hIl2Cpp + EOJLPBEILMB_MKPALFDBFLO_OFFSET))(this, GMDMAPKCDBM, JPBNKOJDKJO);
	}

	::System::Void EGAFNANHILD(::System::Int32& BKNPKMKLHKI, ::System::Int32& CGDPCDEBLDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + EOJLPBEILMB_EGAFNANHILD_OFFSET))(this, BKNPKMKLHKI, CGDPCDEBLDN);
	}
};
