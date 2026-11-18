#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_GET_BASEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x20002460)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x20002B70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_GET_TRIMINCOMINGPATHS_OFFSET UNITYSDK_OFFSET(0x20002470)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_ISVALIDNAME_OFFSET UNITYSDK_OFFSET(0x200029B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_MAKEVALIDNAME_OFFSET UNITYSDK_OFFSET(0x20002660)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_SET_BASEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x200023D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x20002B80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_SET_TRIMINCOMINGPATHS_OFFSET UNITYSDK_OFFSET(0x20002480)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_TRANSFORMDIRECTORY_OFFSET UNITYSDK_OFFSET(0x20002490)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_TRANSFORMFILE_OFFSET UNITYSDK_OFFSET(0x200025D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x20002A70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20002450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x20002330)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int WindowsNameTransform_TypeDefinitionIndex = 6852;

	class WindowsNameTransform : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidEntryChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WindowsNameTransform_TypeDefinitionIndex)->GetStaticField(0x5B20);
		}
		// static const ::System::Int32 MaxPath = 0x104; // 0x0
		::System::String* _baseDirectory; // 0x10
		::System::Boolean _trimIncomingPaths; // 0x18
		::System::Byte _padding0[0x1];
		::System::Char _replacementChar; // 0x1A

		::System::Void _ctor(::System::String* baseDirectory)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM__CTOR_OFFSET))(this, baseDirectory);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM__CCTOR_OFFSET))();
		}

		::System::String* get_BaseDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_GET_BASEDIRECTORY_OFFSET))(this);
		}

		::System::Void set_BaseDirectory(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_SET_BASEDIRECTORY_OFFSET))(this, value);
		}

		::System::Boolean get_TrimIncomingPaths()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_GET_TRIMINCOMINGPATHS_OFFSET))(this);
		}

		::System::Void set_TrimIncomingPaths(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_SET_TRIMINCOMINGPATHS_OFFSET))(this, value);
		}

		::System::String* TransformDirectory(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_TRANSFORMDIRECTORY_OFFSET))(this, name);
		}

		::System::String* TransformFile(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_TRANSFORMFILE_OFFSET))(this, name);
		}

		static ::System::Boolean IsValidName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_ISVALIDNAME_OFFSET))(name);
		}

		static ::System::String* MakeValidName(::System::String* name, ::System::Char replacement)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_MAKEVALIDNAME_OFFSET))(name, replacement);
		}

		::System::Char get_Replacement()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_GET_REPLACEMENT_OFFSET))(this);
		}

		::System::Void set_Replacement(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_WINDOWSNAMETRANSFORM_SET_REPLACEMENT_OFFSET))(this, value);
		}
	};
}
