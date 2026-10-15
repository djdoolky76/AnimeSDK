#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGCDGKOBMK.h"
class FIBKHDABPHD;
class NKIJFPHFJCO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ADGABMKBBNF_CHKLNMLBIPL_OFFSET UNITYSDK_OFFSET(0x1C53B140)
#define ADGABMKBBNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53AD10)
#define ADGABMKBBNF_HDDHHHKMKEI_OFFSET UNITYSDK_OFFSET(0x1C53B5A0)
#define ADGABMKBBNF_LICNAMFLEPK_OFFSET UNITYSDK_OFFSET(0x1C53BC10)
#define ADGABMKBBNF_MMEOMCINFOG_OFFSET UNITYSDK_OFFSET(0x1C53AD30)
#define ADGABMKBBNF_NEDHFMFNOHM_OFFSET UNITYSDK_OFFSET(0x1C53BAE0)

inline static constexpr unsigned int ADGABMKBBNF_TypeDefinitionIndex = 41786;

	class ADGABMKBBNF : public ::DIGCDGKOBMK
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* COEKHGCEFMG; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ADGABMKBBNF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 MMEOMCINFOG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADGABMKBBNF_MMEOMCINFOG_OFFSET))(this, a1, a2);
		}

		::System::Void CHKLNMLBIPL(::FIBKHDABPHD* a1, ::NKIJFPHFJCO* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::FIBKHDABPHD*, ::NKIJFPHFJCO*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ADGABMKBBNF_CHKLNMLBIPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HDDHHHKMKEI(::NKIJFPHFJCO* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ADGABMKBBNF_HDDHHHKMKEI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NEDHFMFNOHM(::FIBKHDABPHD* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIBKHDABPHD*, ::System::Int32))((::PBYTE)hIl2Cpp + ADGABMKBBNF_NEDHFMFNOHM_OFFSET))(this, a1, a2);
		}

		::System::Boolean LICNAMFLEPK(::FIBKHDABPHD* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIBKHDABPHD*, ::System::Int32))((::PBYTE)hIl2Cpp + ADGABMKBBNF_LICNAMFLEPK_OFFSET))(this, a1, a2);
		}

	};
