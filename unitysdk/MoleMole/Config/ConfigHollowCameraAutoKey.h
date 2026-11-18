#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MHOIKLKNAKI.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY_GETHOLLOWCAMERAKEY_OFFSET UNITYSDK_OFFSET(0xFFD4800)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD4A00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraAutoKey_TypeDefinitionIndex = 72653;

	class ConfigHollowCameraAutoKey : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single AutoKeyMaxDuration; // 0x58
		::System::Byte _padding0[0x4];
		::System::String* BaselineStretchKey; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* HorizontalDis; // 0x68
		::System::Collections::Generic::List_1<::System::Single>* VerticalDis; // 0x70
		::System::Object* AutoKeyMatrix; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY__CTOR_OFFSET))(this);
		}

		::System::String* GetHollowCameraKey(::MHOIKLKNAKI type, ::System::Single horizontalOffset, ::System::Single verticalOffset)
		{
			return ((::System::String*(*)(::PVOID, ::MHOIKLKNAKI, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY_GETHOLLOWCAMERAKEY_OFFSET))(this, type, horizontalOffset, verticalOffset);
		}
	};
}
