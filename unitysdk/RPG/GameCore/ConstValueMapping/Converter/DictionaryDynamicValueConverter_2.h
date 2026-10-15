#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore::ConstValueMapping::Converter { template <typename T> class IDynamicValueConverter_1; }

namespace RPG::GameCore::ConstValueMapping::Converter
{
	template <typename T1, typename T2>
	class DictionaryDynamicValueConverter_2 : public ::System::Object
	{
	public:
		::RPG::GameCore::ConstValueMapping::Converter::IDynamicValueConverter_1<T1>* _KeyConverter; // 0x0
		::RPG::GameCore::ConstValueMapping::Converter::IDynamicValueConverter_1<T2>* _ValueConverter; // 0x0
	};
}
