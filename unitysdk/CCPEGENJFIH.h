#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
class CCPEGENJFIH;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CCPEGENJFIH_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x1C4267C0)
#define CCPEGENJFIH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C426780)
#define CCPEGENJFIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C426D80)
#define CCPEGENJFIH_EBDNNOJKODA_OFFSET UNITYSDK_OFFSET(0x1C426CB0)
#define CCPEGENJFIH_EBNAIHPGHEM_OFFSET UNITYSDK_OFFSET(0x1C426CE0)
#define CCPEGENJFIH_FGLGLHDAEDE_10_OFFSET UNITYSDK_OFFSET(0x1C426A50)
#define CCPEGENJFIH_FGLGLHDAEDE_11_OFFSET UNITYSDK_OFFSET(0x1C426A80)
#define CCPEGENJFIH_FGLGLHDAEDE_12_OFFSET UNITYSDK_OFFSET(0x1C426AB0)
#define CCPEGENJFIH_FGLGLHDAEDE_13_OFFSET UNITYSDK_OFFSET(0x1C426AE0)
#define CCPEGENJFIH_FGLGLHDAEDE_14_OFFSET UNITYSDK_OFFSET(0x1C426B10)
#define CCPEGENJFIH_FGLGLHDAEDE_15_OFFSET UNITYSDK_OFFSET(0x1C426B40)
#define CCPEGENJFIH_FGLGLHDAEDE_16_OFFSET UNITYSDK_OFFSET(0x1C426B70)
#define CCPEGENJFIH_FGLGLHDAEDE_17_OFFSET UNITYSDK_OFFSET(0x1C426BB0)
#define CCPEGENJFIH_FGLGLHDAEDE_1_OFFSET UNITYSDK_OFFSET(0x1C426880)
#define CCPEGENJFIH_FGLGLHDAEDE_2_OFFSET UNITYSDK_OFFSET(0x1C4268B0)
#define CCPEGENJFIH_FGLGLHDAEDE_3_OFFSET UNITYSDK_OFFSET(0x1C426900)
#define CCPEGENJFIH_FGLGLHDAEDE_4_OFFSET UNITYSDK_OFFSET(0x1C426930)
#define CCPEGENJFIH_FGLGLHDAEDE_5_OFFSET UNITYSDK_OFFSET(0x1C426960)
#define CCPEGENJFIH_FGLGLHDAEDE_6_OFFSET UNITYSDK_OFFSET(0x1C426990)
#define CCPEGENJFIH_FGLGLHDAEDE_7_OFFSET UNITYSDK_OFFSET(0x1C4269C0)
#define CCPEGENJFIH_FGLGLHDAEDE_8_OFFSET UNITYSDK_OFFSET(0x1C4269F0)
#define CCPEGENJFIH_FGLGLHDAEDE_9_OFFSET UNITYSDK_OFFSET(0x1C426A20)
#define CCPEGENJFIH_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0x1C4267E0)
#define CCPEGENJFIH_GEJPKMNEPPE_OFFSET UNITYSDK_OFFSET(0x1C426D00)
#define CCPEGENJFIH_IJJIFLHMOJO_OFFSET UNITYSDK_OFFSET(0x1C426C90)
#define CCPEGENJFIH_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x1C426C70)
#define CCPEGENJFIH_MENCMHINGAK_OFFSET UNITYSDK_OFFSET(0x1C426D20)
#define CCPEGENJFIH_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x1C426D60)
#define CCPEGENJFIH_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1C426D40)
#define CCPEGENJFIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4267A0)

	class CCPEGENJFIH : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* LIOJKFIGGIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEGENJFIH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEGENJFIH_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEGENJFIH_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_BDJPPIMOJBH_OFFSET))(this, a1, a2);
		}

		::CCPEGENJFIH* FGLGLHDAEDE(::System::Char a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_1(::System::Char a1, ::System::Int32 a2)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_1_OFFSET))(this, a1, a2);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_2(::Il2CppArray<::System::Char>* a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_2_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_3(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_3_OFFSET))(this, a1, a2, a3);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_4(::System::String* a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_4_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_5(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_5_OFFSET))(this, a1, a2, a3);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_6(::System::Byte a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_6_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_7(::System::SByte a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_7_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_8(::System::Int16 a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_8_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_9(::System::UInt16 a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_9_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_10(::System::Int32 a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_10_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_11(::System::UInt32 a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_11_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_12(::System::Int64 a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_12_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_13(::System::UInt64 a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_13_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_14(::System::Single a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_14_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_15(::System::Double a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_15_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_16(::System::Decimal a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_16_OFFSET))(this, a1);
		}

		::CCPEGENJFIH* FGLGLHDAEDE_17(::System::Object* a1)
		{
			return ((::CCPEGENJFIH*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCPEGENJFIH_FGLGLHDAEDE_17_OFFSET))(this, a1);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEGENJFIH_LKEFCMNJDJI_OFFSET))(this);
		}

		::System::Void IJJIFLHMOJO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_IJJIFLHMOJO_OFFSET))(this, a1);
		}

		::System::Int32 EBDNNOJKODA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEGENJFIH_EBDNNOJKODA_OFFSET))(this);
		}

		::System::Void EBNAIHPGHEM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_EBNAIHPGHEM_OFFSET))(this, a1);
		}

		::System::Int32 GEJPKMNEPPE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEGENJFIH_GEJPKMNEPPE_OFFSET))(this);
		}

		::System::Int32 MENCMHINGAK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_MENCMHINGAK_OFFSET))(this, a1);
		}

		::System::Char PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCPEGENJFIH_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + CCPEGENJFIH_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

	};
