#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
class HNFFJNEKJHA;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define IOOIEOKJKMM_HNHOHKNKOKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1650C890)

inline static constexpr unsigned int IOOIEOKJKMM_HNHOHKNKOKM_TypeDefinitionIndex = 60980;

	class IOOIEOKJKMM_HNHOHKNKOKM : public ::System::Object
	{
	public:
		::System::Net::HttpWebRequest* MDPHGOBONBG; // 0x10
		::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::HNFFJNEKJHA*>* PKOEDEOHADB; // 0x18
		::HNFFJNEKJHA* EPFMCIOMPHH; // 0x20
		::System::Net::WebResponse* LCJPCLCCOHB; // 0x28
		::System::Int32 AEBMCLFMKKB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_HNHOHKNKOKM_CTOR_OFFSET))(this);
		}

	};
