#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

class LHPPNKANHMM;

#define OPCLBFFFMOA_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x1E5F8BD0)
#define OPCLBFFFMOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5F8B70)
#define OPCLBFFFMOA_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E5F86B0)
#define OPCLBFFFMOA_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1E5F84B0)
#define OPCLBFFFMOA_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1E5F84C0)
#define OPCLBFFFMOA_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1E5F84D0)
#define OPCLBFFFMOA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E5F84E0)
#define OPCLBFFFMOA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E5F85E0)
#define OPCLBFFFMOA_MGNEBCEJFPL_OFFSET UNITYSDK_OFFSET(0x1E5F8540)
#define OPCLBFFFMOA_READ_OFFSET UNITYSDK_OFFSET(0x1E5F8700)
#define OPCLBFFFMOA_SEEK_OFFSET UNITYSDK_OFFSET(0x1E5F8920)
#define OPCLBFFFMOA_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E5F8A40)
#define OPCLBFFFMOA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E5F8600)
#define OPCLBFFFMOA_WRITE_OFFSET UNITYSDK_OFFSET(0x1E5F8AD0)
#define OPCLBFFFMOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7450)

inline static constexpr unsigned int OPCLBFFFMOA_TypeDefinitionIndex = 34053;

class OPCLBFFFMOA : public ::System::IO::Stream
{
public:
	::LHPPNKANHMM* DKANPKBIMFM; // 0x28
	::System::Boolean IFHPNDPONAL; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 OLLFNNGJCFN; // 0x34

	::System::Void _ctor(::LHPPNKANHMM* KHGFAKJKDGG, ::System::Int32 CPILJNMFPJL)
	{
		return ((::System::Void(*)(::PVOID, ::LHPPNKANHMM*, ::System::Int32))((::PBYTE)hIl2Cpp + OPCLBFFFMOA__CTOR_OFFSET))(this, KHGFAKJKDGG, CPILJNMFPJL);
	}

	::System::Boolean get_CanRead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_GET_CANREAD_OFFSET))(this);
	}

	::System::Boolean get_CanSeek()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_GET_CANSEEK_OFFSET))(this);
	}

	::System::Boolean get_CanWrite()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_GET_CANWRITE_OFFSET))(this);
	}

	::System::Int64 get_Length()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_GET_LENGTH_OFFSET))(this);
	}

	::System::Int64 get_Position()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_SET_POSITION_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_FLUSH_OFFSET))(this);
	}

	::System::Int32 Read(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_READ_OFFSET))(this, PMAMMGFJAJL, BOGPAHGJOJK, JHFKDGBCOBA);
	}

	::System::Int64 Seek(::System::Int64 BOGPAHGJOJK, ::System::IO::SeekOrigin EIIDOADGOIF)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_SEEK_OFFSET))(this, BOGPAHGJOJK, EIIDOADGOIF);
	}

	::System::Void SetLength(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_SETLENGTH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void Write(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_WRITE_OFFSET))(this, PMAMMGFJAJL, BOGPAHGJOJK, JHFKDGBCOBA);
	}

	::System::Void Dispose(::System::Boolean PNDILEHAIJP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_DISPOSE_OFFSET))(this, PNDILEHAIJP);
	}

	::System::Void MGNEBCEJFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_MGNEBCEJFPL_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCLBFFFMOA_CMFOIAAGPFL_OFFSET))(this, MIALFKCCCPI);
	}
};
