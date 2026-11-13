#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOPNJFNAOG;
namespace System { class Object; }

#define FLOPNJFNAOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE46990)
#define FLOPNJFNAOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE469D0)
#define FLOPNJFNAOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE469E0)

inline static constexpr unsigned int FLOPNJFNAOG___c_TypeDefinitionIndex = 28164;

	class FLOPNJFNAOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BBB0);
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
