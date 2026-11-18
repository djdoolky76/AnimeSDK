#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SECTR_SECTORBINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD5D40)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SectorBinData_TypeDefinitionIndex = 39512;

	class SectorBinData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* datas; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTORBINDATA__CTOR_OFFSET))(this);
		}
	};
}
