#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
class IIBBAFBGJJP;
class MLOAGJHJHHA;
namespace System { class Nullable; }

#define NIDGAJFDGND_AKOOKMNFBIM_OFFSET UNITYSDK_OFFSET(0x1C967DC0)
#define NIDGAJFDGND_CEOJHMLFBCK_OFFSET UNITYSDK_OFFSET(0x1C967E30)
#define NIDGAJFDGND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C966100)
#define NIDGAJFDGND_DEPMGINFDBB_OFFSET UNITYSDK_OFFSET(0x1C967840)
#define NIDGAJFDGND_DHJFGJLKBCG_OFFSET UNITYSDK_OFFSET(0x1C966280)
#define NIDGAJFDGND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C966110)
#define NIDGAJFDGND_FLFMLDOGJJB_OFFSET UNITYSDK_OFFSET(0x1C967270)
#define NIDGAJFDGND_JNPPJOHNKOL_OFFSET UNITYSDK_OFFSET(0x1C967A80)
#define NIDGAJFDGND_KJNCBGALFFB_OFFSET UNITYSDK_OFFSET(0x1C9677A0)
#define NIDGAJFDGND_OLPJKJFABAH_OFFSET UNITYSDK_OFFSET(0x1C9673D0)
#define NIDGAJFDGND_PCNCAJCLBCL_OFFSET UNITYSDK_OFFSET(0x1C966210)
#define NIDGAJFDGND_PFPBEFNGAEO_OFFSET UNITYSDK_OFFSET(0x1C967890)
#define NIDGAJFDGND_PJOJKEDHGHC_OFFSET UNITYSDK_OFFSET(0x1C967930)

	class NIDGAJFDGND : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Nullable* PNEBDPNONDN; // 0x20
		::System::Byte _padding0[0x4];
		::System::Nullable* ENMDBEKHOJH; // 0x2C
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + NIDGAJFDGND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_EXECUTE_OFFSET))(this);
		}

		::System::Void PCNCAJCLBCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_PCNCAJCLBCL_OFFSET))(this);
		}

		::System::Boolean DHJFGJLKBCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_DHJFGJLKBCG_OFFSET))(this);
		}

		::System::Void OLPJKJFABAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_OLPJKJFABAH_OFFSET))(this);
		}

		::System::Boolean PJOJKEDHGHC(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + NIDGAJFDGND_PJOJKEDHGHC_OFFSET))(this, a1, a2);
		}

		::System::Boolean FLFMLDOGJJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_FLFMLDOGJJB_OFFSET))(this);
		}

		::System::Boolean JNPPJOHNKOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_JNPPJOHNKOL_OFFSET))(this);
		}

		::System::Boolean DEPMGINFDBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_DEPMGINFDBB_OFFSET))(this);
		}

		::System::Boolean KJNCBGALFFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_KJNCBGALFFB_OFFSET))(this);
		}

		::System::Boolean AKOOKMNFBIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_AKOOKMNFBIM_OFFSET))(this);
		}

		::IIBBAFBGJJP* PFPBEFNGAEO()
		{
			return ((::IIBBAFBGJJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_PFPBEFNGAEO_OFFSET))(this);
		}

		::MLOAGJHJHHA* CEOJHMLFBCK()
		{
			return ((::MLOAGJHJHHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGAJFDGND_CEOJHMLFBCK_OFFSET))(this);
		}

	};
