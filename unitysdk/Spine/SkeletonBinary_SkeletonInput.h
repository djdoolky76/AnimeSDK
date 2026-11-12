#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class Stream; }

#define SPINE_SKELETONBINARY_SKELETONINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF69C20)
#define SPINE_SKELETONBINARY_SKELETONINPUT_GETVERSIONSTRINGOLD3X_OFFSET UNITYSDK_OFFSET(0x1FF78060)
#define SPINE_SKELETONBINARY_SKELETONINPUT_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x1FF69C70)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1FF6A600)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READBYTE_OFFSET UNITYSDK_OFFSET(0x1FF76A10)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READFLOAT_OFFSET UNITYSDK_OFFSET(0x1FF6A3F0)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READFULLY_OFFSET UNITYSDK_OFFSET(0x1FF77F50)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READINT_1_OFFSET UNITYSDK_OFFSET(0x1FF6A690)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READINT_OFFSET UNITYSDK_OFFSET(0x1FF6A990)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READLONG_OFFSET UNITYSDK_OFFSET(0x1FF6A1A0)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1FF6ABC0)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READSTRINGREF_OFFSET UNITYSDK_OFFSET(0x1FF6AB70)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READSTRING_OFFSET UNITYSDK_OFFSET(0x1FF6A2F0)
#define SPINE_SKELETONBINARY_SKELETONINPUT_READ_OFFSET UNITYSDK_OFFSET(0x1FF77590)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBinary_SkeletonInput_TypeDefinitionIndex = 40617;

	class SkeletonBinary_SkeletonInput : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* strings; // 0x10
		::Il2CppArray<::System::Byte>* bytesBigEndian; // 0x18
		::Il2CppArray<::System::Byte>* chars; // 0x20
		::System::IO::Stream* input; // 0x28
		::System::Void _ctor(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READ_OFFSET))(this);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READBYTE_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READSBYTE_OFFSET))(this);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READBOOLEAN_OFFSET))(this);
		}

		::System::Single ReadFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READFLOAT_OFFSET))(this);
		}

		::System::Int32 ReadInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READINT_OFFSET))(this);
		}

		::System::Int64 ReadLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READLONG_OFFSET))(this);
		}

		::System::Int32 ReadInt_1(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READINT_1_OFFSET))(this, a1);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READSTRING_OFFSET))(this);
		}

		::System::String* ReadStringRef()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READSTRINGREF_OFFSET))(this);
		}

		::System::Void ReadFully(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_READFULLY_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetVersionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_GETVERSIONSTRING_OFFSET))(this);
		}

		::System::String* GetVersionStringOld3X()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SKELETONINPUT_GETVERSIONSTRINGOLD3X_OFFSET))(this);
		}

	};
}
