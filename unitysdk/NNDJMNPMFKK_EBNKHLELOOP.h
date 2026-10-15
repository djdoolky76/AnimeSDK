#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLIPALAJNDD;
class NNDJMNPMFKK_EBNKHLELOOP;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NNDJMNPMFKK_EBNKHLELOOP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1DDAFA20)
#define NNDJMNPMFKK_EBNKHLELOOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1BE0)
#define NNDJMNPMFKK_EBNKHLELOOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1B30)
#define NNDJMNPMFKK_EBNKHLELOOP_IDEHJDNONDJ_OFFSET UNITYSDK_OFFSET(0x1DDB16D0)
#define NNDJMNPMFKK_EBNKHLELOOP_NDGCCMLANIG_OFFSET UNITYSDK_OFFSET(0x1DDAF880)
#define NNDJMNPMFKK_EBNKHLELOOP_NMDDMMILMJL_OFFSET UNITYSDK_OFFSET(0x1DDB1B70)

	class NNDJMNPMFKK_EBNKHLELOOP : public ::System::Object
	{
	public:
		::BLIPALAJNDD* LNMKKMMMHMC; // 0x10
		::System::UInt32 OOKGFDLMILI; // 0x18
		::System::UInt32 GLDHMLCAAIL; // 0x1C
		::System::UInt32 KCMGGNAJIIC; // 0x20
		::System::UInt32 EOFKMKJIOHC; // 0x24
		::System::UInt32 FLKMPGABMCJ; // 0x28
		::System::UInt32 FJEBPEBNFDN; // 0x2C
		::System::UInt32 GLPFHHALEBL; // 0x30
		::System::UInt32 ADIIOCFDJBO; // 0x34
		::System::UInt32 ANDAJEMJGDH; // 0x38
		::System::UInt32 OHBEDAHEIHB; // 0x3C
		::System::UInt32 CMBDNACHCLB; // 0x40
		::System::UInt32 GADFNJLJINH; // 0x44
		::System::UInt32 ICGOLHEPIEE; // 0x48
		static ::System::Collections::Generic::Stack_1<::System::Object*>** StaticGet_LLKHHCEOEHJ()
		{
			return (::System::Collections::Generic::Stack_1<::System::Object*>**)UnitySDK::FromName("", "EBNKHLELOOP")->GetStaticField(0x5F380);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNDJMNPMFKK_EBNKHLELOOP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNDJMNPMFKK_EBNKHLELOOP_CCTOR_OFFSET))();
		}

		static ::NNDJMNPMFKK_EBNKHLELOOP* ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::NNDJMNPMFKK_EBNKHLELOOP*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NNDJMNPMFKK_EBNKHLELOOP_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::System::Void NDGCCMLANIG(::NNDJMNPMFKK_EBNKHLELOOP* a1)
		{
			return ((::System::Void(*)(::NNDJMNPMFKK_EBNKHLELOOP*))((::PBYTE)hIl2Cpp + NNDJMNPMFKK_EBNKHLELOOP_NDGCCMLANIG_OFFSET))(a1);
		}

		::System::Int32 IDEHJDNONDJ(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + NNDJMNPMFKK_EBNKHLELOOP_IDEHJDNONDJ_OFFSET))(this, a1, a2);
		}

		::System::Void NMDDMMILMJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDJMNPMFKK_EBNKHLELOOP_NMDDMMILMJL_OFFSET))(this);
		}

	};
