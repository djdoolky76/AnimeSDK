#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

	template <typename T>
	class CKAMKNNDAFO_AudienceAssetUserParam_1 : public ::System::Object
	{
	public:
		::System::String* Path; // 0x0
		::System::Collections::Generic::List_1<T>* LoadParams; // 0x0
	};
