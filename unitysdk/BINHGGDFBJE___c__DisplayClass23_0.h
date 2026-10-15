#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BINHGGDFBJE___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB786FA0)
#define BINHGGDFBJE___C__DISPLAYCLASS23_0__GETNEEDDOWNLOADSIZEFORWHITELIST_B__2_OFFSET UNITYSDK_OFFSET(0xB78F230)

inline static constexpr unsigned int BINHGGDFBJE___c__DisplayClass23_0_TypeDefinitionIndex = 59621;

	class BINHGGDFBJE___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Object* enumor; // 0x10
		::System::Byte _padding0[0x10];
		::System::Func_2<::System::String*, ::System::String*>* __9__2; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::String* _GetNeedDownloadSizeForWhiteList_b__2(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C__DISPLAYCLASS23_0__GETNEEDDOWNLOADSIZEFORWHITELIST_B__2_OFFSET))(this, a1);
		}

	};
