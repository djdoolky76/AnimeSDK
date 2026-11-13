#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/FileShare.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/IO/MonoIOStat.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class FileStream; }
namespace System::IO { class StreamReader; }
namespace System::IO { class StreamWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_FILE_APPENDALLLINES_OFFSET UNITYSDK_OFFSET(0x19E2A4D0)
#define SYSTEM_IO_FILE_APPENDALLTEXT_OFFSET UNITYSDK_OFFSET(0x19E283E0)
#define SYSTEM_IO_FILE_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x19E28590)
#define SYSTEM_IO_FILE_COPY_1_OFFSET UNITYSDK_OFFSET(0x19E28650)
#define SYSTEM_IO_FILE_COPY_OFFSET UNITYSDK_OFFSET(0x19E28640)
#define SYSTEM_IO_FILE_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x19E28E50)
#define SYSTEM_IO_FILE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19E28DD0)
#define SYSTEM_IO_FILE_CREATE_OFFSET UNITYSDK_OFFSET(0x19E28D50)
#define SYSTEM_IO_FILE_DELETE_OFFSET UNITYSDK_OFFSET(0x19E252F0)
#define SYSTEM_IO_FILE_EXISTS_OFFSET UNITYSDK_OFFSET(0x19E24B70)
#define SYSTEM_IO_FILE_FILLATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x19E2B690)
#define SYSTEM_IO_FILE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19E28CF0)
#define SYSTEM_IO_FILE_GETLASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x19E28F00)
#define SYSTEM_IO_FILE_GET_DEFAULTLOCALFILETIME_OFFSET UNITYSDK_OFFSET(0x19E29050)
#define SYSTEM_IO_FILE_MOVE_OFFSET UNITYSDK_OFFSET(0x19E290E0)
#define SYSTEM_IO_FILE_OPENREAD_OFFSET UNITYSDK_OFFSET(0x19E29680)
#define SYSTEM_IO_FILE_OPENTEXT_OFFSET UNITYSDK_OFFSET(0x19E29700)
#define SYSTEM_IO_FILE_OPENWRITE_OFFSET UNITYSDK_OFFSET(0x19E29770)
#define SYSTEM_IO_FILE_OPEN_1_OFFSET UNITYSDK_OFFSET(0x19E29580)
#define SYSTEM_IO_FILE_OPEN_2_OFFSET UNITYSDK_OFFSET(0x19E29600)
#define SYSTEM_IO_FILE_OPEN_OFFSET UNITYSDK_OFFSET(0x19E29500)
#define SYSTEM_IO_FILE_READALLBYTES_OFFSET UNITYSDK_OFFSET(0x19E29870)
#define SYSTEM_IO_FILE_READALLLINES_1_OFFSET UNITYSDK_OFFSET(0x19E29C30)
#define SYSTEM_IO_FILE_READALLLINES_OFFSET UNITYSDK_OFFSET(0x19E29B40)
#define SYSTEM_IO_FILE_READALLTEXT_1_OFFSET UNITYSDK_OFFSET(0x19E29F60)
#define SYSTEM_IO_FILE_READALLTEXT_OFFSET UNITYSDK_OFFSET(0x19E29E10)
#define SYSTEM_IO_FILE_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19E297F0)
#define SYSTEM_IO_FILE_WRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x19E2A0B0)
#define SYSTEM_IO_FILE_WRITEALLLINES_1_OFFSET UNITYSDK_OFFSET(0x19E2B0F0)
#define SYSTEM_IO_FILE_WRITEALLLINES_OFFSET UNITYSDK_OFFSET(0x19E2AAE0)
#define SYSTEM_IO_FILE_WRITEALLTEXT_1_OFFSET UNITYSDK_OFFSET(0x19E2A370)
#define SYSTEM_IO_FILE_WRITEALLTEXT_OFFSET UNITYSDK_OFFSET(0x19E2A330)

namespace System::IO
{
	inline static constexpr unsigned int File_TypeDefinitionIndex = 711;

	class File : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::DateTime>* StaticGet_defaultLocalFileTime()
		{
			return (::System::Nullable_1<::System::DateTime>*)UnitySDK::FromName("System.IO", "File")->GetStaticField(0x33B0);
		}

		static ::System::Void AppendAllText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_APPENDALLTEXT_OFFSET))(a1, a2);
		}

		static ::System::IO::StreamWriter* AppendText(::System::String* a1)
		{
			return ((::System::IO::StreamWriter*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_APPENDTEXT_OFFSET))(a1);
		}

		static ::System::Void Copy(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_COPY_OFFSET))(a1, a2);
		}

		static ::System::Void Copy_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_COPY_1_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::FileStream* Create(::System::String* a1)
		{
			return ((::System::IO::FileStream*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATE_OFFSET))(a1);
		}

		static ::System::IO::FileStream* Create_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATE_1_OFFSET))(a1, a2);
		}

		static ::System::IO::StreamWriter* CreateText(::System::String* a1)
		{
			return ((::System::IO::StreamWriter*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATETEXT_OFFSET))(a1);
		}

		static ::System::Void Delete(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_DELETE_OFFSET))(a1);
		}

		static ::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_EXISTS_OFFSET))(a1);
		}

		static ::System::IO::FileAttributes GetAttributes(::System::String* a1)
		{
			return ((::System::IO::FileAttributes(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GETATTRIBUTES_OFFSET))(a1);
		}

		static ::System::DateTime GetLastWriteTime(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GETLASTWRITETIME_OFFSET))(a1);
		}

		static ::System::Void Move(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_MOVE_OFFSET))(a1, a2);
		}

		static ::System::IO::FileStream* Open(::System::String* a1, ::System::IO::FileMode a2)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_OFFSET))(a1, a2);
		}

		static ::System::IO::FileStream* Open_1(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_1_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::FileStream* Open_2(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IO::FileStream* OpenRead(::System::String* a1)
		{
			return ((::System::IO::FileStream*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENREAD_OFFSET))(a1);
		}

		static ::System::IO::StreamReader* OpenText(::System::String* a1)
		{
			return ((::System::IO::StreamReader*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENTEXT_OFFSET))(a1);
		}

		static ::System::IO::FileStream* OpenWrite(::System::String* a1)
		{
			return ((::System::IO::FileStream*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENWRITE_OFFSET))(a1);
		}

		static ::System::Void SetAttributes(::System::String* a1, ::System::IO::FileAttributes a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::FileAttributes))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_SETATTRIBUTES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* ReadAllBytes(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* ReadAllLines(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLLINES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* ReadAllLines_1(::System::IO::StreamReader* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLLINES_1_OFFSET))(a1);
		}

		static ::System::String* ReadAllText(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLTEXT_OFFSET))(a1);
		}

		static ::System::String* ReadAllText_1(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLTEXT_1_OFFSET))(a1, a2);
		}

		static ::System::Void WriteAllBytes(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLBYTES_OFFSET))(a1, a2);
		}

		static ::System::Void WriteAllText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLTEXT_OFFSET))(a1, a2);
		}

		static ::System::Void WriteAllText_1(::System::String* a1, ::System::String* a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLTEXT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::DateTime get_DefaultLocalFileTime()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GET_DEFAULTLOCALFILETIME_OFFSET))();
		}

		static ::System::Void AppendAllLines(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_APPENDALLLINES_OFFSET))(a1, a2);
		}

		static ::System::Void WriteAllLines(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLLINES_OFFSET))(a1, a2);
		}

		static ::System::Void WriteAllLines_1(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLLINES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FillAttributeInfo(::System::String* a1, ::System::IO::MonoIOStat a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::IO::MonoIOStat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_FILLATTRIBUTEINFO_OFFSET))(a1, a2, a3, a4);
		}

	};
}
