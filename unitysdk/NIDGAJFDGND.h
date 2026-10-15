#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
class IIBBAFBGJJP;
class MLOAGJHJHHA;

#define NIDGAJFDGND_AKOOKMNFBIM_OFFSET UNITYSDK_OFFSET(0x1C939B90)
#define NIDGAJFDGND_CEOJHMLFBCK_OFFSET UNITYSDK_OFFSET(0x1C939C00)
#define NIDGAJFDGND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C937F10)
#define NIDGAJFDGND_DEPMGINFDBB_OFFSET UNITYSDK_OFFSET(0x1C939610)
#define NIDGAJFDGND_DHJFGJLKBCG_OFFSET UNITYSDK_OFFSET(0x1C938090)
#define NIDGAJFDGND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C937F20)
#define NIDGAJFDGND_FLFMLDOGJJB_OFFSET UNITYSDK_OFFSET(0x1C939060)
#define NIDGAJFDGND_JNPPJOHNKOL_OFFSET UNITYSDK_OFFSET(0x1C939850)
#define NIDGAJFDGND_KJNCBGALFFB_OFFSET UNITYSDK_OFFSET(0x1C939570)
#define NIDGAJFDGND_OLPJKJFABAH_OFFSET UNITYSDK_OFFSET(0x1C9391B0)
#define NIDGAJFDGND_PCNCAJCLBCL_OFFSET UNITYSDK_OFFSET(0x1C938020)
#define NIDGAJFDGND_PFPBEFNGAEO_OFFSET UNITYSDK_OFFSET(0x1C939660)
#define NIDGAJFDGND_PJOJKEDHGHC_OFFSET UNITYSDK_OFFSET(0x1C939700)

inline static constexpr unsigned int NIDGAJFDGND_TypeDefinitionIndex = 42300;

	class NIDGAJFDGND : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> ENMDBEKHOJH; // 0x20
		::System::Byte _padding0[0x4];
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> PNEBDPNONDN; // 0x2C
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

		::System::Boolean PJOJKEDHGHC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + NIDGAJFDGND_PJOJKEDHGHC_OFFSET))(this, a1, a2);
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
