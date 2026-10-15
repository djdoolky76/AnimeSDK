#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

#define CCKHHADGKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBCD890)
#define CCKHHADGKLP_EDCBEKMNBJO_OFFSET UNITYSDK_OFFSET(0x1EBCD830)
#define CCKHHADGKLP_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EBCD190)
#define CCKHHADGKLP_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1EBCCE90)
#define CCKHHADGKLP_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1EBCCEA0)
#define CCKHHADGKLP_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1EBCCEB0)
#define CCKHHADGKLP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1EBCCEC0)
#define CCKHHADGKLP_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EBCCED0)
#define CCKHHADGKLP_KCJLKICKAGO_OFFSET UNITYSDK_OFFSET(0x1EBCD7E0)
#define CCKHHADGKLP_READ_OFFSET UNITYSDK_OFFSET(0x1EBCD3B0)
#define CCKHHADGKLP_SEEK_OFFSET UNITYSDK_OFFSET(0x1EBCD0E0)
#define CCKHHADGKLP_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1EBCD360)
#define CCKHHADGKLP_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EBCCEE0)
#define CCKHHADGKLP_WRITE_OFFSET UNITYSDK_OFFSET(0x1EBCD5F0)

inline static constexpr unsigned int CCKHHADGKLP_TypeDefinitionIndex = 35240;

	class CCKHHADGKLP : public ::System::IO::Stream
	{
	public:
		::Il2CppArray<::System::Byte>* PMIBLDJPBCB; // 0x28
		::System::Boolean DLGFMPNEHGO; // 0x30
		::System::Byte _padding0[0x7];
		::System::Int64 MIFKHBDOGLN; // 0x38
		::System::Int64 HDHPNOOMAGE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CCKHHADGKLP_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CCKHHADGKLP_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CCKHHADGKLP_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCKHHADGKLP_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCKHHADGKLP_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KCJLKICKAGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_KCJLKICKAGO_OFFSET))(this);
		}

		::System::Void EDCBEKMNBJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKHHADGKLP_EDCBEKMNBJO_OFFSET))(this);
		}

	};
