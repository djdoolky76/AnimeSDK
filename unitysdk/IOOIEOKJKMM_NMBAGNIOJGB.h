#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
class OEIPKOKBJCH;
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define IOOIEOKJKMM_NMBAGNIOJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1650C0E0)

inline static constexpr unsigned int IOOIEOKJKMM_NMBAGNIOJGB_TypeDefinitionIndex = 60979;

	class IOOIEOKJKMM_NMBAGNIOJGB : public ::System::Object
	{
	public:
		::System::Net::WebResponse* LCJPCLCCOHB; // 0x10
		::OEIPKOKBJCH* FLKMPGABMCJ; // 0x18
		::Il2CppArray<::System::Byte>* ONIHDHHBPDC; // 0x20
		::System::Action_1<::System::Net::HttpStatusCode>* PKOEDEOHADB; // 0x28
		::System::Net::HttpWebRequest* MDPHGOBONBG; // 0x30
		::System::UInt32 ABPPIHPNGOA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_NMBAGNIOJGB_CTOR_OFFSET))(this);
		}

	};
