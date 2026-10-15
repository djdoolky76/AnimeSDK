#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJCHKDLALDN;
class JIHILNOBAPH;
class LMLNNHKJEIP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJCHKDLALDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5D5050)
#define CJCHKDLALDN_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C5D5710)
#define CJCHKDLALDN_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C5D57C0)
#define CJCHKDLALDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D5040)

	class CJCHKDLALDN : public ::System::Object
	{
	public:
		::System::String* HEFLHPGKLCI; // 0x10
		::System::String* PEGNLFICABO; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* PFOJIHKJACM; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* IDLHCIHGLFI; // 0x28
		::System::String* EBMNJMIKNPP; // 0x30
		::System::Boolean OCLBMMNNMFC; // 0x38
		::System::Boolean LELKJHMIKFK; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 JDGGFABIPDF; // 0x3C
		::System::UInt32 HDCIIEFCMFA; // 0x40
		::System::UInt32 GMCAHOPDHLI; // 0x44
		::System::UInt32 EECIJBLGLNG; // 0x48
		::System::Int32 CADHBHHCKPO; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCHKDLALDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMLNNHKJEIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLNNHKJEIP*))((::PBYTE)hIl2Cpp + CJCHKDLALDN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::CJCHKDLALDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJCHKDLALDN*))((::PBYTE)hIl2Cpp + CJCHKDLALDN_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::JIHILNOBAPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIHILNOBAPH*))((::PBYTE)hIl2Cpp + CJCHKDLALDN_CTOR_3_OFFSET))(this, a1);
		}

	};
