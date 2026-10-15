#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define ADHIHGCOHME_CTOR_OFFSET UNITYSDK_OFFSET(0xB13A560)

inline static constexpr unsigned int ADHIHGCOHME_TypeDefinitionIndex = 64780;

	class ADHIHGCOHME : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* Datas; // 0x10
		::System::Int32 MaxFavourNum; // 0x18
		::System::Int32 TotalNum; // 0x1C
		::System::Int32 Version; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHIHGCOHME_CTOR_OFFSET))(this);
		}

	};
