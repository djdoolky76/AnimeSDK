#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
class NBJLLEBFGPD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKPJIAAHLBG_CBIOMOBPMDK_OFFSET UNITYSDK_OFFSET(0xB755910)
#define LKPJIAAHLBG_CTOR_OFFSET UNITYSDK_OFFSET(0xB755A90)
#define LKPJIAAHLBG_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0xB755720)
#define LKPJIAAHLBG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB7550E0)

inline static constexpr unsigned int LKPJIAAHLBG_TypeDefinitionIndex = 77593;

	class LKPJIAAHLBG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPJIAAHLBG_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::System::Int32))((::PBYTE)hIl2Cpp + LKPJIAAHLBG_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DLGFMPNEHGO(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + LKPJIAAHLBG_DLGFMPNEHGO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::NBJLLEBFGPD*>* CBIOMOBPMDK(::System::String* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Collections::Generic::List_1<::NBJLLEBFGPD*>*(*)(::PVOID, ::System::String*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + LKPJIAAHLBG_CBIOMOBPMDK_OFFSET))(this, a1, a2);
		}

	};
