#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/BinaryReader.h"
#include "unitysdk/System/Decimal.h"
namespace System { class String; }
namespace System::IO { class Stream; }

#define CCPJJEJBPHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C41FDB0)
#define CCPJJEJBPHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41FC50)
#define CCPJJEJBPHD_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1C421F90)
#define CCPJJEJBPHD_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1C421950)
#define CCPJJEJBPHD_READINT16_OFFSET UNITYSDK_OFFSET(0x1C41FF10)
#define CCPJJEJBPHD_READINT32_OFFSET UNITYSDK_OFFSET(0x1C420410)
#define CCPJJEJBPHD_READINT64_OFFSET UNITYSDK_OFFSET(0x1C420A70)
#define CCPJJEJBPHD_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1C421570)
#define CCPJJEJBPHD_READSTRING_OFFSET UNITYSDK_OFFSET(0x1C4221A0)
#define CCPJJEJBPHD_READUINT16_OFFSET UNITYSDK_OFFSET(0x1C420190)
#define CCPJJEJBPHD_READUINT32_OFFSET UNITYSDK_OFFSET(0x1C4206A0)
#define CCPJJEJBPHD_READUINT64_OFFSET UNITYSDK_OFFSET(0x1C420F50)

inline static constexpr unsigned int CCPJJEJBPHD_TypeDefinitionIndex = 41373;

	class CCPJJEJBPHD : public ::System::IO::BinaryReader
	{
	public:
		::System::Void _ctor(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READINT16_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READUINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READINT32_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READUINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READINT64_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READUINT64_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READDOUBLE_OFFSET))(this);
		}

		::System::Decimal ReadDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READDECIMAL_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJJEJBPHD_READSTRING_OFFSET))(this);
		}

	};
