#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GHHGADBINAG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GHHGADBINAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GHHGADBINAG_CBEDPKEEJCA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GHHGADBINAG_CCKDPALMOAA_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define GHHGADBINAG_CEFCCGLAAON_OFFSET UNITYSDK_OFFSET(0x754D50)
#define GHHGADBINAG_CGHKNIALNKL_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define GHHGADBINAG_DOAOJAAEBJL_OFFSET UNITYSDK_OFFSET(0x758200)
#define GHHGADBINAG_GCJMAMGAAKI_OFFSET UNITYSDK_OFFSET(0x756720)
#define GHHGADBINAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHHGADBINAG_KIKCCAOBBKA_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define GHHGADBINAG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5BFD50)
#define GHHGADBINAG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GHHGADBINAG_TypeDefinitionIndex = 16412;

struct alignas(4) GHHGADBINAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGADBINAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHHGADBINAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGADBINAG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DOAOJAAEBJL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GHHGADBINAG_DOAOJAAEBJL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KIKCCAOBBKA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GHHGADBINAG_KIKCCAOBBKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GCJMAMGAAKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGADBINAG_GCJMAMGAAKI_OFFSET))(this);
	}

	::System::Int32 CCKDPALMOAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGADBINAG_CCKDPALMOAA_OFFSET))(this);
	}

	::System::Boolean CGHKNIALNKL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GHHGADBINAG_CGHKNIALNKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GHHGADBINAG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GHHGADBINAG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GHHGADBINAG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CEFCCGLAAON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGADBINAG_CEFCCGLAAON_OFFSET))(this);
	}

	/*
	::GHHGADBINAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHHGADBINAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHHGADBINAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CBEDPKEEJCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGADBINAG_CBEDPKEEJCA_OFFSET))(this);
	}
};
