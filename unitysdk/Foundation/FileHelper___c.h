#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::IO { class FileInfo; }

#define FOUNDATION_FILEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3FBC50)
#define FOUNDATION_FILEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3FBC90)
#define FOUNDATION_FILEHELPER___C__DELETEFILES_B__36_0_OFFSET UNITYSDK_OFFSET(0x1F3FBCA0)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper___c_TypeDefinitionIndex = 8526;

	class FileHelper___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FileHelper___c_TypeDefinitionIndex)->GetStaticField(0x6DE0);
		}
		static ::System::Action_1<::System::IO::FileInfo*>** StaticGet___9__36_0()
		{
			return (::System::Action_1<::System::IO::FileInfo*>**)Il2CppClass::FromTypeDefinitionIndex(FileHelper___c_TypeDefinitionIndex)->GetStaticField(0x6DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteFiles_b__36_0(::System::IO::FileInfo* fi)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__DELETEFILES_B__36_0_OFFSET))(this, fi);
		}
	};
}
