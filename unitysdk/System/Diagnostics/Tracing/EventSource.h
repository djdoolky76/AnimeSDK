#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventChannel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventCommand.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventManifestOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSourceSettings.h"
#include "unitysdk/System/Diagnostics/Tracing/SessionMask.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Diagnostics/Tracing/EventDescriptor.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSourceOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource_EventMetadata.h"
namespace System { class Attribute; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class ActivityTracker; }
namespace System::Diagnostics::Tracing { class EtwSession; }
namespace System::Diagnostics::Tracing { class EventAttribute; }
namespace System::Diagnostics::Tracing { class EventCommandEventArgs; }
namespace System::Diagnostics::Tracing { class EventDispatcher; }
namespace System::Diagnostics::Tracing { class EventListener; }
namespace System::Diagnostics::Tracing { class EventSource; }
namespace System::Diagnostics::Tracing { class EventSource_OverideEventProvider; }
namespace System::Diagnostics::Tracing { class EventWrittenEventArgs; }
namespace System::Diagnostics::Tracing { class ManifestBuilder; }
namespace System::Diagnostics::Tracing { class NameInfo; }
namespace System::Diagnostics::Tracing { class TraceLoggingEventTypes; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDEVENTDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D37C9C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1D362E40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDPROVIDERENUMKIND_OFFSET UNITYSDK_OFFSET(0x1D37A220)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDVALUETOMETADATA_OFFSET UNITYSDK_OFFSET(0x1D36A210)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ANYEVENTENABLED_OFFSET UNITYSDK_OFFSET(0x1D376130)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ATTRIBUTETYPENAMESMATCH_OFFSET UNITYSDK_OFFSET(0x1D379860)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D37D520)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CREATEMANIFESTANDDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x1D376E90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D36CD00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D36CD10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36CCF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DEBUGCHECKEVENT_OFFSET UNITYSDK_OFFSET(0x1D37BCA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DECODEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D372330)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPATCHTOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1D3733D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D370540)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3632E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DOCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D371140)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENABLEEVENTFORDISPATCHER_OFFSET UNITYSDK_OFFSET(0x1D375870)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENSUREDESCRIPTORSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D375350)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D3709E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GENERATEGUIDFROMNAME_OFFSET UNITYSDK_OFFSET(0x1D36C740)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETCUSTOMATTRIBUTEHELPER_OFFSET UNITYSDK_OFFSET(0x1D36AC30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETDISPATCHER_OFFSET UNITYSDK_OFFSET(0x1D372B00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETETWSESSIONMASK_OFFSET UNITYSDK_OFFSET(0x1D36E5D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETEVENTSOURCEBASETYPE_OFFSET UNITYSDK_OFFSET(0x1D379CB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETGUID_OFFSET UNITYSDK_OFFSET(0x1D36A9F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETHELPERCALLFIRSTARG_OFFSET UNITYSDK_OFFSET(0x1D37D0B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x1D36C930)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_OFFSET UNITYSDK_OFFSET(0x1D36C900)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETOPCODEWITHDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D375140)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETPARAMLENGTHINCLUDINGBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1D3732A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_CURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D35DE50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_FALLBACKACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D36CA60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1D36A960)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_INTERNALCURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D35C1E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1D376E50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D36A950)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_SELFDESCRIBINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1D36E9A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_THROWONEVENTWRITEERRORS_OFFSET UNITYSDK_OFFSET(0x1D3750B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_HEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1D36A850)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZEPROVIDERMETADATA_OFFSET UNITYSDK_OFFSET(0x1D369CF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D36CE50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDBYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D375020)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDCOMMON_OFFSET UNITYSDK_OFFSET(0x1D36A9C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_1_OFFSET UNITYSDK_OFFSET(0x1D368660)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_2_OFFSET UNITYSDK_OFFSET(0x1D36A980)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1D36A970)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_LOGEVENTARGSMISMATCHES_OFFSET UNITYSDK_OFFSET(0x1D372B30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ONEVENTCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D36D350)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_PARSECOMMANDARGS_OFFSET UNITYSDK_OFFSET(0x1D375930)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REMOVEFIRSTARGIFRELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D37BA60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTACTIVITYSAMPLINGINFO_OFFSET UNITYSDK_OFFSET(0x1D376320)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTOUTOFBANDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D35BB30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D3751A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDMANIFEST_OFFSET UNITYSDK_OFFSET(0x1D3705E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SERIALIZEEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1D372F40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SETCURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D35E0A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_THROWEVENTSOURCEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D36E9C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D36CB70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TRIMEVENTDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x1D37CBF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D369BC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEETWSESSION_OFFSET UNITYSDK_OFFSET(0x1D375D40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEKWDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1D3761C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATEEVENTOPCODEFORTRANSFER_OFFSET UNITYSDK_OFFSET(0x1D36E590)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATESETTINGS_OFFSET UNITYSDK_OFFSET(0x1D36CDF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D3694C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET UNITYSDK_OFFSET(0x1D36D380)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTRAW_OFFSET UNITYSDK_OFFSET(0x1D369440)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTSTRING_OFFSET UNITYSDK_OFFSET(0x1D370C90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTVARARGS_OFFSET UNITYSDK_OFFSET(0x1D36F9E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTWITHRELATEDACTIVITYIDCORE_OFFSET UNITYSDK_OFFSET(0x1D36DB00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1D36D3A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_2_OFFSET UNITYSDK_OFFSET(0x1D36D4E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_3_OFFSET UNITYSDK_OFFSET(0x1D36D640)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_4_OFFSET UNITYSDK_OFFSET(0x1D36D790)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_5_OFFSET UNITYSDK_OFFSET(0x1D36D930)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_6_OFFSET UNITYSDK_OFFSET(0x1D36F9D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x1D36D360)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGEINNER_OFFSET UNITYSDK_OFFSET(0x1D3686A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_1_OFFSET UNITYSDK_OFFSET(0x1D3695B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_OFFSET UNITYSDK_OFFSET(0x1D3685D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1D374CC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOLISTENER_OFFSET UNITYSDK_OFFSET(0x1D370AB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_1_OFFSET UNITYSDK_OFFSET(0x1D372E10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1D36F660)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_TypeDefinitionIndex = 1662;

	class EventSource : public ::System::Object
	{
	public:
		::System::String* m_name; // 0x10
		::Il2CppArray<::System::Byte>* providerMetadata; // 0x18
		::System::Diagnostics::Tracing::EventDispatcher* m_Dispatchers; // 0x20
		::Il2CppArray<::System::Diagnostics::Tracing::EtwSession*>* m_etwSessionIdMap; // 0x28
		::System::Diagnostics::Tracing::ActivityTracker* m_activityTracker; // 0x30
		::Il2CppArray<::System::String*>* m_traits; // 0x38
		::Il2CppArray<::System::Object*>* m_eventData; // 0x40
		::System::Diagnostics::Tracing::EventSource_OverideEventProvider* m_provider; // 0x48
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EtwSession*>* m_legacySessions; // 0x50
		::System::Diagnostics::Tracing::EventCommandEventArgs* m_deferredCommands; // 0x58
		::System::Exception* m_constructionException; // 0x60
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventCommandEventArgs*>* m_eventCommandExecuted; // 0x68
		::Il2CppArray<::System::Byte>* m_rawManifest; // 0x70
		::System::Diagnostics::Tracing::EventKeywords m_matchAnyKeyword; // 0x78
		::System::Byte _padding0[0x4];
		::System::Diagnostics::Tracing::SessionMask m_activityFilteringForETWEnabled; // 0x80
		::System::Diagnostics::Tracing::EventSourceSettings m_config; // 0x84
		::System::Boolean m_eventSourceEnabled; // 0x88
		::System::Byte m_outOfBandMessageCount; // 0x89
		::System::Boolean m_completelyInited; // 0x8A
		::System::Byte _padding1[0x1];
		::System::Diagnostics::Tracing::EventLevel m_level; // 0x8C
		::System::Int64 m_keywordTriggers; // 0x90
		::System::Diagnostics::Tracing::SessionMask m_curLiveSessions; // 0x98
		::System::Int32 m_id; // 0x9C
		::System::Guid m_guid; // 0xA0
		static ::System::Action_1<::System::Guid>** StaticGet_s_activityDying()
		{
			return (::System::Action_1<::System::Guid>**)UnitySDK::FromName("System.Diagnostics.Tracing", "EventSource")->GetStaticField(0x10FA0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_namespaceBytes()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Diagnostics.Tracing", "EventSource")->GetStaticField(0x10FA8);
		}

		static ::System::UInt32* StaticGet_s_currentPid()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Diagnostics.Tracing", "EventSource")->GetStaticField(0x3800);
		}

		static ::System::Guid* StaticGet_AspNetEventSourceGuid()
		{
			return (::System::Guid*)UnitySDK::FromName("System.Diagnostics.Tracing", "EventSource")->GetStaticField(0x3804);
		}

		static ::System::Byte* StaticGet_m_EventSourceExceptionRecurenceCount()
		{
			return (::System::Byte*)UnitySDK::FromName("System.Diagnostics.Tracing", "EventSource")->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::Tracing::EventSourceSettings a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Diagnostics::Tracing::EventSourceSettings a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CCTOR_OFFSET))();
		}

		::System::Void WriteMultiMerge(::System::String* a1, ::System::Diagnostics::Tracing::EventSourceOptions a2, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a3, ::PVOID a4, ::PVOID a5, ::Il2CppArray<::System::Object*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::PVOID, ::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteMultiMergeInner(::System::String* a1, ::System::Diagnostics::Tracing::EventSourceOptions a2, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a3, ::PVOID a4, ::PVOID a5, ::Il2CppArray<::System::Object*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::PVOID, ::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGEINNER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteMultiMerge_1(::System::String* a1, ::System::Diagnostics::Tracing::EventSourceOptions a2, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a3, ::PVOID a4, ::PVOID a5, ::PVOID a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteCleanup(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITECLEANUP_OFFSET))(this, a1, a2);
		}

		::System::Void InitializeProviderMetadata()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZEPROVIDERMETADATA_OFFSET))(this);
		}

		static ::System::Int32 AddValueToMetaData(::System::Collections::Generic::List_1<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDVALUETOMETADATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 HexDigit(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_HEXDIGIT_OFFSET))(a1);
		}

		::System::Diagnostics::Tracing::NameInfo* UpdateDescriptor(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a2, ::System::Diagnostics::Tracing::EventSourceOptions a3, ::System::Diagnostics::Tracing::EventDescriptor a4)
		{
			return ((::System::Diagnostics::Tracing::NameInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Diagnostics::Tracing::EventSourceOptions, ::System::Diagnostics::Tracing::EventDescriptor))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEDESCRIPTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_GUID_OFFSET))(this);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET))(this);
		}

		::System::Boolean IsEnabled_1(::System::Diagnostics::Tracing::EventLevel a1, ::System::Diagnostics::Tracing::EventKeywords a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnabled_2(::System::Diagnostics::Tracing::EventLevel a1, ::System::Diagnostics::Tracing::EventKeywords a2, ::System::Diagnostics::Tracing::EventChannel a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventChannel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Guid GetGuid(::System::Type* a1)
		{
			return ((::System::Guid(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETGUID_OFFSET))(a1);
		}

		static ::System::String* GetName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_OFFSET))(a1);
		}

		static ::System::Void SetCurrentThreadActivityId(::System::Guid a1)
		{
			return ((::System::Void(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SETCURRENTTHREADACTIVITYID_OFFSET))(a1);
		}

		static ::System::Guid get_CurrentThreadActivityId()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_CURRENTTHREADACTIVITYID_OFFSET))();
		}

		static ::System::Guid get_InternalCurrentThreadActivityId()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_INTERNALCURRENTTHREADACTIVITYID_OFFSET))();
		}

		static ::System::Guid get_FallbackActivityId()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_FALLBACKACTIVITYID_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET))(this);
		}

		::System::Void OnEventCommand(::System::Diagnostics::Tracing::EventCommandEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommandEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ONEVENTCOMMAND_OFFSET))(this, a1);
		}

		::System::Void WriteEvent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(this, a1);
		}

		::System::Void WriteEvent_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEvent_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEvent_3(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_3_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEvent_4(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEvent_5(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEventCore(::System::Int32 a1, ::System::Int32 a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEventWithRelatedActivityIdCore(::System::Int32 a1, ::PVOID a2, ::System::Int32 a3, ::PVOID a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTWITHRELATEDACTIVITYIDCORE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEvent_6(::System::Int32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_6_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET))(this);
		}

		::System::Void WriteStringToListener(::System::Diagnostics::Tracing::EventListener* a1, ::System::String* a2, ::System::Diagnostics::Tracing::SessionMask a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::String*, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEventRaw(::System::String* a1, ::System::Diagnostics::Tracing::EventDescriptor a2, ::PVOID a3, ::PVOID a4, ::System::Int32 a5, ::System::IntPtr a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventDescriptor, ::PVOID, ::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTRAW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Initialize(::System::Guid a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* GetName_1(::System::Type* a1, ::System::Diagnostics::Tracing::EventManifestOptions a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_1_OFFSET))(a1, a2);
		}

		static ::System::Guid GenerateGuidFromName(::System::String* a1)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GENERATEGUIDFROMNAME_OFFSET))(a1);
		}

		::System::Object* DecodeObject(::System::Int32 a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DECODEOBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Diagnostics::Tracing::EventDispatcher* GetDispatcher(::System::Diagnostics::Tracing::EventListener* a1)
		{
			return ((::System::Diagnostics::Tracing::EventDispatcher*(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETDISPATCHER_OFFSET))(this, a1);
		}

		::System::Void WriteEventVarargs(::System::Int32 a1, ::PVOID a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTVARARGS_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* SerializeEventArgs(::System::Int32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SERIALIZEEVENTARGS_OFFSET))(this, a1, a2);
		}

		::System::Void LogEventArgsMismatches(::Il2CppArray<::System::Reflection::ParameterInfo*>* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_LOGEVENTARGSMISMATCHES_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetParamLengthIncludingByteArray(::Il2CppArray<::System::Reflection::ParameterInfo*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETPARAMLENGTHINCLUDINGBYTEARRAY_OFFSET))(this, a1);
		}

		::System::Void WriteToAllListeners(::System::Int32 a1, ::PVOID a2, ::System::Int32 a3, ::PVOID a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteToAllListeners_1(::System::Int32 a1, ::PVOID a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DispatchToAllListeners(::System::Int32 a1, ::PVOID a2, ::System::Diagnostics::Tracing::EventWrittenEventArgs* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Diagnostics::Tracing::EventWrittenEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPATCHTOALLLISTENERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEventString(::System::Diagnostics::Tracing::EventLevel a1, ::System::Int64 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStringToAllListeners(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOALLLISTENERS_OFFSET))(this, a1, a2);
		}

		::System::Diagnostics::Tracing::SessionMask GetEtwSessionMask(::System::Int32 a1, ::PVOID a2)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETETWSESSIONMASK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnabledByDefault(::System::Int32 a1, ::System::Boolean a2, ::System::Diagnostics::Tracing::EventLevel a3, ::System::Diagnostics::Tracing::EventKeywords a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDBYDEFAULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsEnabledCommon(::System::Boolean a1, ::System::Diagnostics::Tracing::EventLevel a2, ::System::Diagnostics::Tracing::EventKeywords a3, ::System::Diagnostics::Tracing::EventLevel a4, ::System::Diagnostics::Tracing::EventKeywords a5, ::System::Diagnostics::Tracing::EventChannel a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventChannel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDCOMMON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ThrowEventSourceException(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_THROWEVENTSOURCEEXCEPTION_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateEventOpcodeForTransfer(::System::Diagnostics::Tracing::EventSource_EventMetadata a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource_EventMetadata, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATEEVENTOPCODEFORTRANSFER_OFFSET))(this, a1, a2);
		}

		static ::System::Diagnostics::Tracing::EventOpcode GetOpcodeWithDefault(::System::Diagnostics::Tracing::EventOpcode a1, ::System::String* a2)
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::System::Diagnostics::Tracing::EventOpcode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETOPCODEWITHDEFAULT_OFFSET))(a1, a2);
		}

		::System::Void SendCommand(::System::Diagnostics::Tracing::EventListener* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Diagnostics::Tracing::EventCommand a4, ::System::Boolean a5, ::System::Diagnostics::Tracing::EventLevel a6, ::System::Diagnostics::Tracing::EventKeywords a7, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventCommand, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDCOMMAND_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DoCommand(::System::Diagnostics::Tracing::EventCommandEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommandEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DOCOMMAND_OFFSET))(this, a1);
		}

		::System::Void UpdateEtwSession(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEETWSESSION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ParseCommandArgs(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1, ::System::Boolean a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_PARSECOMMANDARGS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void UpdateKwdTriggers(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEKWDTRIGGERS_OFFSET))(this, a1);
		}

		::System::Boolean EnableEventForDispatcher(::System::Diagnostics::Tracing::EventDispatcher* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDispatcher*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENABLEEVENTFORDISPATCHER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AnyEventEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ANYEVENTENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void EnsureDescriptorsInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENSUREDESCRIPTORSINITIALIZED_OFFSET))(this);
		}

		::System::Boolean SendManifest(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDMANIFEST_OFFSET))(this, a1);
		}

		static ::System::Attribute* GetCustomAttributeHelper(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::Diagnostics::Tracing::EventManifestOptions a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETCUSTOMATTRIBUTEHELPER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AttributeTypeNamesMatch(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ATTRIBUTETYPENAMESMATCH_OFFSET))(a1, a2);
		}

		static ::System::Type* GetEventSourceBaseType(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETEVENTSOURCEBASETYPE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* CreateManifestAndDescriptors(::System::Type* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventSource* a3, ::System::Diagnostics::Tracing::EventManifestOptions a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Type*, ::System::String*, ::System::Diagnostics::Tracing::EventSource*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CREATEMANIFESTANDDESCRIPTORS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean RemoveFirstArgIfRelatedActivityId(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REMOVEFIRSTARGIFRELATEDACTIVITYID_OFFSET))(a1);
		}

		static ::System::Void AddProviderEnumKind(::System::Diagnostics::Tracing::ManifestBuilder* a1, ::System::Reflection::FieldInfo* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ManifestBuilder*, ::System::Reflection::FieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDPROVIDERENUMKIND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddEventDescriptor(::System::Object* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventAttribute* a3, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Diagnostics::Tracing::EventAttribute*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDEVENTDESCRIPTOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void TrimEventDescriptors(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TRIMEVENTDESCRIPTORS_OFFSET))(a1);
		}

		::System::Void AddListener(::System::Diagnostics::Tracing::EventListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDLISTENER_OFFSET))(this, a1);
		}

		static ::System::Void DebugCheckEvent(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Reflection::MethodInfo* a3, ::System::Diagnostics::Tracing::EventAttribute* a4, ::System::Diagnostics::Tracing::ManifestBuilder* a5, ::System::Diagnostics::Tracing::EventManifestOptions a6)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Reflection::MethodInfo*, ::System::Diagnostics::Tracing::EventAttribute*, ::System::Diagnostics::Tracing::ManifestBuilder*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DEBUGCHECKEVENT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 GetHelperCallFirstArg(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETHELPERCALLFIRSTARG_OFFSET))(a1);
		}

		::System::Void ReportOutOfBandMessage(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTOUTOFBANDMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Diagnostics::Tracing::EventSourceSettings ValidateSettings(::System::Diagnostics::Tracing::EventSourceSettings a1)
		{
			return ((::System::Diagnostics::Tracing::EventSourceSettings(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATESETTINGS_OFFSET))(this, a1);
		}

		::System::Boolean get_ThrowOnEventWriteErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_THROWONEVENTWRITEERRORS_OFFSET))(this);
		}

		::System::Boolean get_SelfDescribingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_SELFDESCRIBINGEVENTS_OFFSET))(this);
		}

		::System::Void ReportActivitySamplingInfo(::System::Diagnostics::Tracing::EventListener* a1, ::System::Diagnostics::Tracing::SessionMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTACTIVITYSAMPLINGINFO_OFFSET))(this, a1, a2);
		}

	};
}
