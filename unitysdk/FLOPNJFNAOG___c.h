#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOPNJFNAOG;
namespace System { class Object; }

#define FLOPNJFNAOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD5A0)
#define FLOPNJFNAOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD5E0)
#define FLOPNJFNAOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3DD5F0)

inline static constexpr unsigned int FLOPNJFNAOG___c_TypeDefinitionIndex = 27633;

	class FLOPNJFNAOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x648C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOPNJFNAOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG___C_CTOR_OFFSET))(this);
		}

		::FLOPNJFNAOG* __cctor_b__28_0()
		{
			return ((::FLOPNJFNAOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
