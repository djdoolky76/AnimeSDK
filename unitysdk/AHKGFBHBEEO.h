#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class KAJJEJMHCGD;
class PBGNKMMDBGD;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHKGFBHBEEO_BEENFOCPCMB_OFFSET UNITYSDK_OFFSET(0x1C587ED0)
#define AHKGFBHBEEO_BOENADDGNMM_OFFSET UNITYSDK_OFFSET(0x1C588350)
#define AHKGFBHBEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C587CF0)
#define AHKGFBHBEEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C587E80)
#define AHKGFBHBEEO_HMGPJOANMPG_OFFSET UNITYSDK_OFFSET(0x1C588690)
#define AHKGFBHBEEO_NIKKILEAFKH_OFFSET UNITYSDK_OFFSET(0x1C588A60)

inline static constexpr unsigned int AHKGFBHBEEO_TypeDefinitionIndex = 37320;

	class AHKGFBHBEEO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::ValueTuple>* NEBCGCKIAFM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple>* GPEPMBICJFC; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::UInt32 ABFCFDCOAAC; // 0x28
		// static const ::System::Object JNKAKBIEJAI; // 0x0
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + AHKGFBHBEEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGFBHBEEO_DISPOSE_OFFSET))(this);
		}

		::System::Void BEENFOCPCMB(::System::Int32 a1, ::KAJJEJMHCGD* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KAJJEJMHCGD*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKGFBHBEEO_BEENFOCPCMB_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple BOENADDGNMM(::System::Object* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHKGFBHBEEO_BOENADDGNMM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HMGPJOANMPG(::KAJJEJMHCGD* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAJJEJMHCGD*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKGFBHBEEO_HMGPJOANMPG_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple NIKKILEAFKH(::System::Object* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHKGFBHBEEO_NIKKILEAFKH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
